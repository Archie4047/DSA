//Search Inserted Position
#include <iostream>
#include <vector>
using namespace std;

int position(vector<int>&nums,int target){
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
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
    return st;
}
int main(){
    vector<int>nums = {1, 3, 5, 6};
    int target = 5;
    cout<<position(nums,target)<<endl;
    return 0;
}