#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>>threesum(vector<int>& arr){
    vector<vector<int>>result;
    vector<int>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(i > 0 && arr[i] == arr[i-1]){
            continue;
        }
        int j = i+1;
        int k = arr.size()-1;
        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                ans.push_back(arr[k]);
                result.push_back(ans);
                j++;
                k--;
                while(j < k && arr[j] == arr[j-1]){
                    j++;
                }
            }
        }
    }
    return result;
}
int main(){
    vector<int>arr = {-1,0,1,2,-1,-4};
    vector<vector<int>>result = threesum(arr);
    for(auto &v : result){
        for(int x : v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}