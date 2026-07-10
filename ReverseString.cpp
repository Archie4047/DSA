//Reverse every word in a string 
#include <iostream>
#include <algorithm>
using namespace std;

string words(string s){
    string word = "";
    int st = 0;
    int end = s.length()-1;
    while(st<end && s[st] == ' '){
        st++;
    }
    while(end>=0 && s[end] == ' '){
        end--;
    }
    s = s.substr(st,end-st+1);
    reverse(s.begin(),s.end());
    string ans = "";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            continue;
        }
        string word = "";
        while(i<s.length() && s[i] != ' '){
            word = word + s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        ans = ans + " " + word;
    }
    return ans.substr(1);
}
int main(){
    string s = "welcome to the jungle";
    cout<<words(s)<<endl;
    return 0;
}