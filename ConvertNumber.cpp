//Minimum Bit Flips to Convert Number 
#include <iostream>
using namespace std;

int value(int a,int b){
    int val = a^b;
    int count = 0;
    while(val > 0){
        if((val & 1) == 1){
            count++;
        }
        val = val>>1;
    }
    return count;
}
int main(){
    int a = 10;
    int b = 7;
    cout<<value(a,b)<<endl;
    return 0;
}