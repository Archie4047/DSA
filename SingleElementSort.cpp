//Single element in the sorted order 
#include <iostream>
#include <vector>
using namespace std;

int element(vector<int>& nums){
    int st = 0;
    int end = nums.size()-1;
    while(st < end){
        int mid = st+(end-st)/2;
        if(mid % 2 != 0){
            mid--;
        }
        if(nums[mid] == nums[mid+1]){
            st = mid + 2;
        }
        else{
            end = mid;
        }
    }
    return nums[st];
}
int main(){
    vector<int>nums = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    cout<<element(nums)<<endl;
    return 0;
}