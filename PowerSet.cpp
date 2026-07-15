//Power Set Bit Manipulation 
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>set(vector<int>nums){
    vector<vector<int>>ans;
    int n = nums.size();
    for(int mask=0;mask<(1<<n);mask++){
        vector<int>subset;
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                subset.push_back(nums[i]);
            }
        }
        ans.push_back(subset);
    }
    return ans;
}
int main(){
    vector<int>nums = {1, 2, 3};
    vector<vector<int>>ans = set(nums);
    for(auto subset : ans){
        cout<<"{ ";
        for(auto x : subset){
            cout<<x<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}