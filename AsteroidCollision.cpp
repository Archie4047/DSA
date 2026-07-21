//Asteroid Collision 
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int>value(vector<int>nums){
    vector<int>ans;
    stack<int>st;
    for(int i=0;i<nums.size();i++){
        if(nums[i] < 0){
            while(!st.empty() && st.top() > 0 && st.top() < abs(nums[i])){
                st.pop();
            }
            if(!st.empty() && st.top() > 0 && st.top() == abs(nums[i])){
                st.pop();
            }
            if(st.empty() || st.top() < 0){
                st.push(nums[i]);
            }
        }
        else{
            st.push(nums[i]);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>nums = {1, 2, 3, -4, -2};
    vector<int>ans = value(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}