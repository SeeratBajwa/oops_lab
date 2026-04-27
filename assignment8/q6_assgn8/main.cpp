/*1.	Develop a class template for stack with push and pop operations.*/
#include<iostream>
using namespace std;

template <class t>
class stack{
    public:
    t s[100];
    int top;
    stack(){
        top = -1;
    }

    void push(t x){
        if(top == 99)
            cout<<"stack overflow";
        else
            s[++top] = x;
    }

    void pop(){
        if(top == -1)
            cout<<"stack underflow";
        else
            cout<<"popped= "<<s[top--]<<endl;
    }
};

int main(){
    stack<int> s;
    s.push(5);
    s.push(7);
    s.push(19);
    s.pop();
    return 0;
}