#include <iostream>
#include <unordered_map>
using namespace std;

bool isomorphic(string s,string t){
    unordered_map<int,int>m;
    unordered_map<int,int>mp;
    for(int i=0;i<s.length();i++){
        if(m.find(s[i]) == m.end() && mp.find(t[i]) == mp.end()){
            m[s[i]] = t[i];
            mp[t[i]] = s[i];
        }
        else{
            if(m[s[i]] != t[i] || mp[t[i]] != s[i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string s = {"egg"};
    string t = {"add"};
    cout<<isomorphic(s,t)<<endl;
    return 0;
}