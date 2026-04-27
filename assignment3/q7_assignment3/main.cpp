/*7.	Write a program to pass an object as an argument and return the object from a function.
a.	Use pass-by-value
b.    Use pass-by reference
*/
#include <iostream>
using namespace std;

class number{
    public:
    int a=20;
};

//a) pass-by-value: modifys copy
number incrementValue(number num){
    num.a += 1;
    return num;
}
//b) pass-by-reference: modifys original
number incrementRef(number &num){
    num.a += 1;
    return num;
}

int main()
{
    number n;
    
/* a) */    
    cout<<"before pass-by-value= "<<n.a<<endl;
    number val = incrementValue(n);
    cout<<"after pass-by-value= "<<val.a<<endl;
    
/* b) */    
    cout<<"before pass-by-ref= "<<n.a<<endl;
    number ref = incrementRef(n);
    cout<<"after pass-by-ref= "<<ref.a<<endl;
 

    return 0;
}