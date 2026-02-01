/*swap private values of two classes using a friend function*/

#include<iostream>
using namespace std;

class number1;
class number2;
void show(number1 &, number2 &);

class number1{
    int x = 5;
    friend void swap(number1 &, number2 &);
    friend void show(number1 &, number2 &);
};
class number2{
    int y=13;
    friend void swap(number1 &, number2 &);
    friend void show(number1 &, number2 &);
};
void swap(number1 &n1, number2 &n2){
    n1.x = n1.x^n2.y;
    n2.y=n1.x^n2.y;
    n1.x=n1.x^n2.y;
}
void show(number1 &n1, number2 &n2){
    swap(n1,n2);
    cout<<"swapped values are\nx= "<<n1.x<<", y= "<<n2.y;
}
int main(){
    number1 num1;
    number2 num2;
    show(num1, num2);
}