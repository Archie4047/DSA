//Maximum nested depth paranthesis 
#include <iostream>
using namespace std;

int val(string s){
    int count = 0;
    int ans = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            count++;
        }
        else if(s[i] == ')'){
            ans = max(ans,count);
            count--;
        }
    }
    return ans;
}
int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    cout<<val(s)<<endl;
    return 0;
}