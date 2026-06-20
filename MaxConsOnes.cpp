#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ones(vector<int>& nums){
    int count = 0;
    int ans = 0;
    int value = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            count++;
        }
        else{
            ans = max(ans,count);
            count = 0;
        }
        ans = max(ans,count);
    }
    return ans;
}
int main(){
    vector<int>nums = {1, 1, 0, 0, 1, 1, 1, 0};
    cout<<ones(nums)<<endl;
}