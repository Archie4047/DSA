//Search X in a sorted array
#include <iostream>
#include <vector>
using namespace std;

int sorted(vector<int>& nums,int target){
    int st = 0;
    int end = nums.size()-1;
    while(st <= end){
        int mid = st+(end-st)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums = {-1,0,3,5,9,12};
    int target = 9;
    cout<<sorted(nums,target)<<endl;
    return 0;
}