//Sort by frequency 
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<char,int>a,pair<char,int>b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
}
vector<char>val(string s){
    vector<char>ans;
    unordered_map<char,int>m;
    vector<pair<char,int>>result;
    for(char i : s){
        m[i]++;
    }
    for(auto i : m){
        result.push_back(i);
    }
    sort(result.begin(),result.end(),cmp);
    for(auto i : result){
        ans.push_back(i.first);
    }
    return ans;
}
int main(){
    string s = "tree";
    vector<char>ans = val(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}