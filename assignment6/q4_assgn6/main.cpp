/*Write a program to add data objects of two different classes using friend functions*/
#include <iostream>
using namespace std;

class num2;

class num1{
    public:
    int a;
    int b;
    num1(){
        a=5;
        b=10;
    }
     friend int add(num1 n1, num2 n2);
};
class num2{
    public:
    int x;
    int y;
    num2(){
        x=2;
        y=200;
    }
    friend int add(num1 n1, num2 n2);
};

 int add(num1 n1, num2 n2){
     return (n1.a + n2.x) + (n1.b+n2.y);
 }

int main()
{
    num1 n1;
    num2 n2;
    cout<<add(n1,n2);

    return 0;
}