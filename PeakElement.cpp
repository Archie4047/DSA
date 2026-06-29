//Find Peak Element 
#include <iostream>
#include <vector>
using namespace std;

int value(vector<int>& nums){
    int st = 0;
    int end = nums.size()-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(nums[mid] > nums[mid+1]){
            end = mid;
        }
        else{
            st = mid + 1;
        }
    }
    return end;
}
int main(){
    vector<int>nums = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    cout<<value(nums)<<endl;
    return 0;
}