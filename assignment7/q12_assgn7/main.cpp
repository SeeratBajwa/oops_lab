#include<iostream>
using namespace std;
class test{
    public:
    float f;
    void input(){
        cin>>f;
    }
    operator float (){
        return f;
    }
};

int main(){
    test t;
    float fl;
    t.input();
    fl = t;  
    cout<<fl;
    return 0;
}