//Implement Stack using Queue 
#include <iostream>
#include <queue>
using namespace std;

class Mystack{
    queue<int>q;
    public:
    void push(int data){
        q.push(data);
        int n = q.size();
        for(int i=0;i<n-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop(){
        if(q.empty()){
            return -1;
        }
        int ans = q.front();
        q.pop();
        return ans;
    }
    int peek(){
        if(q.empty()){
            return -1;
        }
        return q.front();
    }
};
int main(){
    Mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.peek()<<endl;
    s.push(80);
    cout<<s.peek()<<endl;
    return 0;
}