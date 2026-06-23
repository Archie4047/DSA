#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int sumk(vector<int>& nums,int k){
    unordered_map<int,int>m;//TC = O(n) SC = O(n)
    m[0]=1;
    int prefixSum = 0;
    int count = 0;
    for(int i=0;i<nums.size();i++){
        prefixSum = prefixSum + nums[i];
        count = count + m[prefixSum-k];
        m[prefixSum]++;
    }
    return count;
}
int main(){
    vector<int>nums = {1, 1, 1};
    int k = 2;
    cout<<sumk(nums,k)<<endl;
    return 0;
}