//Remove K Digits 
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string small(string nums,int k){
    stack<char>s;
    string word = "";
    for(int i=0;i<nums.length();i++){
        while(!s.empty() && k > 0 && s.top()-'0' > nums[i]-'0'){
            s.pop();
            k--;
        }
        s.push(nums[i]);
    }
    if(k > 0){
        while(k>0){
            s.pop();
            k--;
        }
    }
    while(!s.empty()){
        word += s.top();
        s.pop();
    }
    reverse(word.begin(),word.end());
    int st = 0;
    int end = word.length()-1;
    while(st <= end && word[st] == '0'){
        st++;
    }
    if(word.substr(st,end-st+1) == ""){
        return "0";
    }
    return word.substr(st,end-st+1);
}
int main(){
    string nums = "541892";
    int k = 2;
    cout<<small(nums,k)<<endl;
    return 0;
}