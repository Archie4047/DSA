#include <iostream>
#include <algorithm>
using namespace std;

bool str(string s,string t){
    int n = s.length()-1;
    int k = 1;
    if(s == t){
        return true;
    }
    while(k < n){//TC = O(n) SC = O(1)
        reverse(s.begin(),s.end());
        reverse(s.begin(),s.begin()+k);
        reverse(s.begin()+k,s.end());
        if(s == t){
            return true;
            break;
        }
        k++;
    }
    return false;
}
int main(){
    string s = "abcde";
    string t = "cdeab";
    cout<<str(s,t)<<endl;
    return 0;
}