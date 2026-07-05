//Longest Common Prefix 
#include <iostream>
#include <vector>
using namespace std;

string common(vector<string>s){
    string word = s[0];
    for(int i=1;i<s.size();i++){
        if(word.length() > s[i].length()){
            word = s[i];
        }
    }
    string result = s[0];
    for(int i=0;i<s.size();i++){
        string val = s[i];
        int st = 0;
        string ans = "";
        while(st < word.length()){
            if(val[st] == word[st]){
                ans = ans + word[st];
                st++;
            }
            else{
                break;
            }
        }
        if(ans.length() < result.length()){
            result = ans;
        }
    }
    return result;
}
int main(){
    vector<string>s = {"flowers" , "flow" , "fly", "flight"};
    cout<<common(s)<<endl;
    return 0;
}