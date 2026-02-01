/*6.	Write a program to define function cube() as inline for calculating cube of a number.*/
#include <iostream>
using namespace std;

inline int cube(int num){
    return num*num*num;
}

int main()
{
    int ans = cube(5);
    cout<<"cube of num is "<<ans;

    return 0;
}