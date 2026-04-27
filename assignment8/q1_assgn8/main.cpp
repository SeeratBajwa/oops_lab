/*1.	Write a function template to swap two variables of any data type.*/
#include <iostream>
#include<string>
using namespace std;

template <typename T>
void swapval(T& a, T& b){
    T temp = a;
    a=b;
    b=temp;
}

int main(){
   int x = 10, y=80;
   swapval(x,y);
   cout<<"new values, x= "<<x<<", y= "<<y;
   
   double m=20.88, n=-12.7;
swapval(m,n);
cout<<"new values, m= "<<m<<", n= "<<n;
    return 0;
}