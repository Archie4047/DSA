//Search in a rotated sorted array
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>nums,int target){
    int piviot;
    for(int i=1;i<nums.size();i++){// TC = O(n)+O(log n) SC = O(1)
        if(nums[i-1] > nums[i]){
            piviot = i-1;
        }
    }
    int st;
    int end;
    if(nums[0] < target){
        st = 0;
        end = piviot;
    }
    else{
        st = piviot + 1;
        end = nums.size()-1;
    }
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
    return -1;
}
int main(){
    vector<int>nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout<<search(nums,target)<<endl;
    return 0;
}