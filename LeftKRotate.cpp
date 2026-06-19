#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>move(vector<int>& nums,int k){
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
    return nums;
}
int main(){
    vector<int>nums = {1, 2, 3, 4, 5, 6};
    int k = 2;
    move(nums,k);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}