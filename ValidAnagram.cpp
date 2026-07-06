#include <iostream>
#include <algorithm>
using namespace std;

bool str(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s == t){
        return true;
    }
    return false;
}
int main(){
    string s = {};
    string t = {};
    cout<<str(s,t)<<endl;
    return 0;
}