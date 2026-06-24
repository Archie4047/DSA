#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int>element(vector<int>& nums){
    unordered_map<int,int>m;
    int n = nums.size();
    vector<int>ans;
    for(int i : nums){
        m[i]++;
    }
    for(pair<int,int>i : m){
        if(i.second > n/3){
            ans.push_back(i.first);
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {1, 2, 1, 1, 3, 2, 2};
    vector<int>ans = element(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}