#include <iostream>
#include <vector>
using namespace std;

int profit(vector<int>& nums){
    int buyStock = nums[0];//TC = O(n) SC = O(1)
    int profit = 0;
    for(int i=1;i<nums.size();i++){
        if(buyStock < nums[i]){
            profit = max(profit,nums[i]-buyStock);
        }
        buyStock = min(buyStock,nums[i]);
    }
    return profit;

    // int profit = 0;//TC = O(n^2) SC = O(1)
    // for(int i=0;i<nums.size();i++){
    //     int buyStock = nums[i];
    //     for(int j=i;j<nums.size();j++){
    //         profit = max(profit,nums[j]-buyStock);
    //     }
    // }
    // return profit;
}
int main(){
    vector<int>nums = {10, 7, 5, 8, 11, 9};
    cout<<profit(nums)<<endl;
    return 0;
}