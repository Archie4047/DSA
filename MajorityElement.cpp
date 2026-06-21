#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int element(vector<int>& nums){
    // unordered_map<int,int>m;TC = O(n) SC = O(n)
    // int ans  = 0;
    // int n = nums.size();
    // for(int i : nums){
    //     m[i]++;
    // }
    // for(pair<int,int>i : m){
    //     if(i.second > n/2){
    //         ans = i.first;
    //     }
    // }
    // return ans;

    int votecount = 0;//TC = O(n) SC = O(1)
    int candidate = 0;
    for(int i=0;i<nums.size();i++){
        int currcandidate = nums[i];
        if(votecount == 0){
            candidate = currcandidate;
        }
        if(currcandidate == candidate){
            votecount++;
        }
        else{
            votecount--;
        }
    }
    return candidate;
}
int main(){
    vector<int>nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    cout<<element(nums)<<endl;
    return 0;
}