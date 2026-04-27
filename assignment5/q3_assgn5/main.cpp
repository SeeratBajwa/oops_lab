/*ry protected and private access modifiers to understand the difference of various modes of inheritance.*/
#include <iostream>
using namespace std;
class base{
    public:
    int age;
    int score;
    base(int a, int s){
        age=a;
        score=s;
    }
    void display(){
        cout<<"age= "<<age<<", score= "<<score<<endl;
    }
};
class derive1 : protected base{
    public:
    derive1(int a, int s):base(a,s) {}
    void show(){
        display();
    }
};
class derive2:private base{
    public:
    derive2(int a, int s):base(a,s) {}
    void show(){
        display();
    }
};

int main(){

    // d1.display(); // not accessible due to protected inheritance
    derive1 d1(22,89);
    d1.show();
    derive2 d2(-11,6);
    d2.show();

    return 0;
}