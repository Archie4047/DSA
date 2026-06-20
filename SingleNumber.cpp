#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;//TC = O(n) SC = O(1)
    for(int i : nums){
        ans = ans ^ i;
    }
    return ans;

    // unordered_map<int,int>m; TC = O(n)+O(n) SC = O(n)
    // int ans = 0;
    // for(int i : nums){
    //     m[i]++;
    // }
    // for(auto i : m){
    //     if(i.second == 1){
    //         ans = i.first;
    //     }
    // }
    // return ans;
}
int main(){
    vector<int>nums = {1, 2, 2, 4, 3, 1, 4};
    cout<<singleNumber(nums)<<endl;
    return 0;
}