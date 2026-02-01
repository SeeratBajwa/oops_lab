/*3.	Write a program to add data objects of two different classes using friend functions.*/
#include <iostream>
using namespace std;

class Number2;

class Number1{
    int num1=10;
    friend void sum(Number1, Number2);
};
class Number2{
    int num2=5;
    friend void sum(Number1, Number2);
};
void sum(Number1 N1, Number2 N2){
cout<<"sum = "<<N1.num1 + N2.num2;    
}

int main()
{
    Number1 Num1;
    Number2 Num2;
    sum(Num1, Num2);

    return 0;
}