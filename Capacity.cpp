//Capacity To Ship Packages Within D Days 
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int day(vector<int>& nums,int days){
    int st = INT_MIN;
    for(int i=0;i<nums.size();i++){
        st = max(st,nums[i]);
    }
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum = sum + nums[i];
    }
    int end = sum;
    int ans = end;
    while(st<=end){
        int mid = st+(end-st)/2;
        int val = 0;
        int d = 1;
        for(int i=0;i<nums.size();i++){
            if(val + nums[i] <= mid){
                val = val + nums[i];
            }
            else{
                val = 0;
                d++;
                i--;
            }
        }
        if(d <= days){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout<<day(nums,days)<<endl;
    return 0;
}