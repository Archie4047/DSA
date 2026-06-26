//First and Last Occurance
#include <iostream>
#include <vector>
using namespace std;


int first(vector<int>nums,int target){
    int st = 0;
    int end = nums.size()-1;
    int ans = -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else if(nums[mid] > target){
            end = mid -1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}
int second(vector<int>nums,int target){
    int st = 0;
    int end = nums.size()-1;
    int ans = -1;
    while(st <= end){
        int mid = st+(end-st)/2;
        if(nums[mid] == target){
            ans = mid;
            st = mid + 1;
        }
        else if(nums[mid] > target){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}
vector<int>occ(vector<int>& nums,int target){
    int val = first(nums,target);
    int val1 = second(nums,target);
    vector<int>ans;
    ans.push_back(val);
    ans.push_back(val1);
    return ans;
}
int main(){
    vector<int>nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int>ans = occ(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}