#include <iostream>
#include <vector>
using namespace std;

vector<int>sign(vector<int>& nums){
    int n = nums.size();
    vector<int>ans(n);
    int even = 0;
    int odd = 1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > 0){
            ans[even] = nums[i];
            even = even + 2;
        }
        else{
            ans[odd] = nums[i];
            odd = odd + 2;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {2, 4, 5, -1, -3, -4};
    vector<int>ans = sign(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}