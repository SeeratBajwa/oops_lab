/*Write a simple base class, then a derived class and use objects of both of them in the main function. It will be a simple illustration of inheritance*/
#include <iostream>
using namespace std;
class base{
    public:
    int age;
    int score;
    base(){}
    base(int a, int s){
        age=a;
        score=s;
    }
    public:
void display(){
    cout<<"age= "<<age<<", score= "<<score<<endl;
}
};
class derived : public base{
    public:
    derived(){}
    derived(int a, int s): base(a,s) {}
};

int main(){
    base b;
    b.age=11;
    b.score=99;
    b.display();
derived d;
d.age=25;
d.score=230;
d.display();
    return 0;
}