//Implement Queue using Stack 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Myqueue{
    stack<int>s1;
    stack<int>s2;
    public:
    void push(int data){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(data);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop(){
        if(s1.empty()){
            return -1;
        }
        int ans = s1.top();
        s1.pop();
        return ans;
    }
    int peek(){
        if(s1.empty()){
            return -1;
        }
        return s1.top();
    }
};
int main(){
    Myqueue q;
    q.push(20);
    q.push(10);
    q.push(40);
    q.push(80);

    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    q.push(800);
    cout<<q.peek()<<endl;
    return 0;
}