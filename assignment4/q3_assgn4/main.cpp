
#include <iostream>
using namespace std;

class Test{
    public:
    //constructor
    Test(){
        cout<<"constructor"<<endl;
    }
    //destructor
    ~Test(){
        cout<<"destructor"<<endl;
    }
};

int main(){
Test t;

    return 0;
}