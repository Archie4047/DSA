//Find minimum in the sorted rotated array 
#include <iostream>
#include <vector>
using namespace std;

int minimum(vector<int>& nums){
    int st = 0;
    int end = nums.size()-1;
    while(st < end){
        int mid = st+(end-st)/2;
        if(nums[mid] < nums[end]){
            end = mid;
        }
        else{
            st = mid + 1;
        }
    }
    return nums[end];
}
int main(){
    vector<int>nums = {4, 5, 6, 7, 0, 1, 2, 3};
    cout<<minimum(nums)<<endl;
    return 0;
}