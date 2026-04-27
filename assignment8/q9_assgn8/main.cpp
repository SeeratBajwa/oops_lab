/*4. Create a class template for basic arithmetic operations*/
#include<iostream>
using namespace std;

template <class t>
class arithm{
public:
    t a,b;
    void input(){
        cin>>a>>b;
    }
    void add(){
        cout<<"sum = "<<a+b<<"\n";
    }
    void sub(){
        cout<<"diff = "<<a-b<<"\n";
    }
    void mul(){
        cout<<"prod = "<<a*b<<"\n";
    }
    void divid(){
        cout<<"div = "<<a/b<<"\n";
    }
};

int main(){
    arithm<int> art;
    art.input();
    art.add();
    art.sub();
    art.mul();
    art.divid();

    return 0;
}