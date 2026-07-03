#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int value(vector<int>& nums,int k){
    unordered_set<int>m(nums.begin(),nums.end());
    int i = 1;
    int ans;
    while(k > 0){
        if(m.find(i) == m.end()){
            k--;
            ans = i;
        }
        i++;
    }
    return ans;
}
int main(){
    vector<int>nums = {3, 5, 7, 10};
    int k = 6;
    cout<<value(nums,k)<<endl;
    return 0;
}