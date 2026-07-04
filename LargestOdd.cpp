//Largest odd length string 
#include <iostream>
using namespace std;

string odd(string s){
    int st = 0;
    int end = s.length()-1;
    while(end >= 0 && s[end] % 2 == 0){
        end--;
    }
    return s.substr(st,end-st+1);
}
int main(){
    string s = "52";
    cout<<odd(s)<<endl;
    return 0;
}