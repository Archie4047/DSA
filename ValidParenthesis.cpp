//Balanced Paranthesis 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool visit(string s){
    stack<int>s1;
    for(int i=0;i<s.length();i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            s1.push(s[i]);
        }
        else{
            if(s1.empty()){
                return false;
            }
            if((s1.top() == '{' && s[i] == '}') || (s1.top() == '[' && s[i] == ']') || (s1.top() == '(' && s[i] == ')')){
                s1.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s1.empty()){
        return true;
    }
    return false;
}
int main(){
    string s = "()[{}()]";
    cout<<visit(s)<<endl;
    return 0;
}