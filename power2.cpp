#include <iostream>
using namespace std;

bool power(int x){
    if(x > 0 && x&(x-1) == 0){
        return true;
    }
    return false;
}
int main(){
    int x = 1;
    cout<<power(x)<<endl;
    return 0;
}