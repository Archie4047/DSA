#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>twosum(vector<int>& arr,int target){
    unordered_map<int,int>m;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int first = arr[i];
        int sec = target - arr[i];
        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
        }
        m[arr[i]] = i;
    }
    return ans;
}
int main(){
    vector<int>arr = {1,2,3,4,5};
    int target = 3;
    vector<int>ans = twosum(arr,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}