//Koko eating banana 
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int value(vector<int>& nums,int h){
    int maximum = INT_MIN;;
    for(int i=0;i<nums.size();i++){
        maximum = max(maximum,nums[i]);
    }
    int st = 1;
    int end = maximum;
    int ans;
    while(st <= end){
        int count = 0;
        int mid = st+(end-st)/2;
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            while(temp > 0){
                temp = temp - mid;
                count++;
            }
        }
        if(count <= h){
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
    vector<int>nums = {3,6,7,11};
    int h = 8;
    cout<<value(nums,h)<<endl;
    return 0;
}