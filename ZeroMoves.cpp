#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>zero(vector<int>& nums){
    int k = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i],nums[k]);
            k++;
        }
    }
    return nums;
}
int main(){
    vector<int>nums = {0, 1, 4, 0, 5, 2};
    zero(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}