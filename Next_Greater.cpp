//Next Greater Element - 2 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int>value(vector<int>nums){
    int n = nums.size();
    vector<int>nge(n);
    stack<int>st;
    for(int i=2*nums.size()-1;i>=0;i--){
        while(!st.empty() && st.top() <= nums[i%n]){
            st.pop();
        }
        if(st.empty()){
            nge[i%n] = -1;
        }
        else{
            nge[i%n] = st.top();
        }
        st.push(nums[i%n]);
    }
    return nge;
}
int main(){
    vector<int>nums = {3, 10, 4, 2, 1, 2, 6, 1, 7, 2, 9};
    vector<int>nge = value(nums);
    for(int i=0;i<nge.size();i++){
        cout<<nge[i]<<" ";
    }
    return 0;
}