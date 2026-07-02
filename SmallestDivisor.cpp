#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int div(vector<int>& nums,int threshold){
    int maximum = INT_MIN;
    for(int i=0;i<nums.size();i++){
        maximum = max(maximum,nums[i]);
    }
    int st = 1;
    int end = maximum;
    int sum = 0;
    int ans = end;
    while(st<=end){
        int mid = st+(end-st)/2;
        for(int i=0;i<nums.size();i++){
            sum = sum +(nums[i]+mid-1)/mid;
        }
        if(sum <= threshold){
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
    vector<int>nums = {44,22,33,11,1};
    int threshold = 5;
    cout<<div(nums,threshold)<<endl;
    return 0;
}