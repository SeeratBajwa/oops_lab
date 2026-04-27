/*5.	How can you use constructors and destructors in C++ inheritance? Write a program to illustrate.*/
#include <iostream>
using namespace std;

class base{
public:
    int age;
    base(int a){  
        age = a;
        cout<<"Base constructor called"<<endl;
    }
    ~base(){  
        cout<<"Base destructor called"<<endl;
    }
};

class derived : public base{
public:
    derived(int a) : base(a){   
        cout<<"derived constructor"<<endl;
    }
    ~derived(){
        cout<<"derived destructor";
    }
};

int main(){
    derived d(89);
    return 0;
}