#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int subseq(vector<int>& nums){
    // sort(nums.begin(),nums.end());//TC = O(nlogn)+O(n) SC = O(1)
    // int count = 1;
    // int ans = 1;
    // for(int i=1;i<nums.size();i++){
    //     if(nums[i] == nums[i-1]){
    //         continue;
    //     }
    //     if(nums[i] == nums[i-1]+1){
    //         count++;
    //     }
    //     else{
    //         count = 1;
    //     }
    //     ans = max(ans,count);
    // }
    // return ans;

    unordered_set<int>m(nums.begin(),nums.end());
    int ans = 1;
    for(int i : m){//TC = O(n) // SC = O(n)
        if(m.find(i-1) == m.end()){
            int curr = i;
            int count = 1;
            while(m.find(curr+1) != m.end()){
                curr = curr + 1;
                count++;
            }
            ans = max(ans,count);
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {100, 4, 200, 1, 3, 2};
    cout<<subseq(nums)<<endl;
    return 0;
}