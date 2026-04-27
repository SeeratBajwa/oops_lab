/*2.Practice protected access specifier in inheritance. In the base class declare a variable which is protected and access it in the derived class.*/
#include <iostream>
using namespace std;
class base{
    public:
    int age;
    protected:
    int score;
    public:
    base(int a, int s){
        age=a;
        score=s;
    }
    void display(){
        cout<<"age= "<<age<<", score= "<<score<<endl;
    }
};
class derive:public base{
    public:
    derive(int a, int s) : base(a,s){}
};

int main(){
    derive d(22,580);
d.display();
    return 0;
}