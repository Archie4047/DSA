//Next permutation 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(vector<int>& nums){
    int piviot = -1;
    int val;
    for(int i=nums.size()-1;i>0;i--){
        if(nums[i-1]<nums[i]){
            piviot = i-1;
            val = nums[i-1];
            break;
        }
    }
    if(piviot == -1){
        reverse(nums.begin(),nums.end());
    }
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i] > val){
            swap(nums[i],nums[piviot]);
            break;
        }
    }
    reverse(nums.begin()+piviot+1,nums.end());
}
int main(){
    vector<int>nums = {1,2,3};
    permutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}