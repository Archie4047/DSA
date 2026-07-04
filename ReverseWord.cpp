#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string rev(string s){
    int st = 0;
    int end = s.length()-1;
    while(st <= end && s[st] == ' '){//TC = O(n)
        st++;
    }
    while(end >= 0 && s[end] == ' '){//TC = O(n)
        end--;
    }
    string s1 = s.substr(st,end-st+1);//TC = O(n) SC = O(n)
    reverse(s1.begin(),s1.end());//TC = O(n)
    string ans = "";
    for(int i=0;i<s1.length();i++){//TC = O(n) * O(n)
        if(s1[i] == ' '){
            continue;
        }
        else{
            string word = "";
            while(i < s1.length() && s1[i] != ' '){
                word = word + s1[i];
                i++;
            }
            reverse(word.begin(),word.end());//TC = O(n)
            ans = ans + " " + word;
        }
    }
    return ans.substr(1);
}
int main(){
    string s = " aaaa world ";
    cout<<rev(s)<<endl;
    return 0;
}