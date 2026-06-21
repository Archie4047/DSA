#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int value(vector<int>& nums){
    int sum = 0;
    int ans = INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum = sum + nums[i];
        ans = max(ans,sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {2, 3, 5, -2, 7, -4};
    cout<<value(nums)<<endl;
    return 0;
}