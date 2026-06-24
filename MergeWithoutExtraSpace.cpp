#include <iostream>
#include <vector>
using namespace std;

vector<int>merge(vector<int>nums1,vector<int>nums2,int m,int n){
    int i = m-1;
    int j = n-1;
    int idx = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i] <= nums2[j]){
            nums1[idx] = nums2[j];
            idx--;
            j--;
        }
        else{
            nums1[idx] = nums1[i];
            idx--;
            i--;
        }
    }
    while(j>=0){
        nums1[idx] = nums2[j];
        idx--;
        j--;
    }
    return nums1;
}
int main(){
    vector<int>nums1 = {-5, -2, 4, 5, 0, 0, 0};
    vector<int>nums2 = {-3, 1, 8};
    int m = 4;
    int n = 3;
    nums1 = merge(nums1,nums2,m,n);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}