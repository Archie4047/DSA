//Sum of Subarray Ranges 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int>nextGreater(vector<int>nums){
    int n = nums.size();
    stack<int>st;
    vector<int>nge(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()] <= nums[i]){
            st.pop();
        }
        if(st.empty()){
            nge[i] = n;
        }
        else{
            nge[i] = st.top();
        }
        st.push(i);
    }
    return nge;
}
vector<int>prevGreater(vector<int>nums){
    int n = nums.size();
    stack<int>st;
    vector<int>pge(n);
    for(int i=0;i<n;i++){
        while(!st.empty() && nums[st.top()] < nums[i]){
            st.pop();
        }
        if(st.empty()){
            pge[i] = -1;
        }
        else{
            pge[i] = st.top();
        }
        st.push(i);
    }
    return pge;
}
vector<int>nextSmaller(vector<int>nums){
    int n = nums.size();
    stack<int>st;
    vector<int>nse(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()] >= nums[i]){
            st.pop();
        }
        if(st.empty()){
            nse[i] = n;
        }
        else{
            nse[i] = st.top();
        }
        st.push(i);
    }
    return nse;
}
vector<int>prevSmaller(vector<int>nums){
    int n = nums.size();
    stack<int>st;
    vector<int>pse(n);
    for(int i=0;i<n;i++){
        while(!st.empty() && nums[st.top()] > nums[i]){
            st.pop();
        }
        if(st.empty()){
            pse[i] = -1;
        }
        else{
            pse[i] = st.top();
        }
        st.push(i);
    }
    return pse;
}
int value(vector<int>nums){
    int n = nums.size();
    vector<int>nge = nextGreater(nums);
    vector<int>pge = prevGreater(nums);
    vector<int>nse = nextSmaller(nums);
    vector<int>pse = prevSmaller(nums);
    int greater = 0;
    int smaller = 0;
    for(int i=0;i<nums.size();i++){
        int left = i - pge[i];
        int right = nge[i] - i;
        int leftt = i - pse[i];
        int rightt = nse[i] - i;
        greater = greater + (left*right*nums[i]);
        smaller = smaller + (leftt*rightt*nums[i]);
    }
    return greater - smaller;
}
int main(){
    vector<int>nums = {1, 2, 3};
    cout<<value(nums)<<endl;
}