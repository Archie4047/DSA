//Minimum Number of Days to Make m Bouquets 
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int days(vector<int>& nums,int m,int k){
    int maximum = INT_MIN;
    for(int i=0;i<nums.size();i++){
        maximum = max(maximum,nums[i]);
    }
    int st = 0;
    int end = maximum;
    int ans = -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        int count = 0;
        int boquet = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] <= mid){
                count++;
                if(count == k){
                    boquet++;
                    count = 0;
                }
                
            }
            else{
                count = 0;
            }
        }
        if(boquet >= m){
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
    vector<int>nums = {1,10,3,10,2};
    int m = 3;
    int k = 1;
    cout<<days(nums,m,k)<<endl;
    return 0;
}