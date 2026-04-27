#include <iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;

    Complex(int r=0, int i=0){     
        real=r;
        imag=i;
    }

    Complex(const Complex &c){     
        real=c.real;
        imag=c.imag;
    }

    friend void sum(Complex, Complex, Complex&);
    
    void display(){
        cout<<"num is "<<real<<" + i"<<imag<<endl;
    }
};

void sum(Complex c1, Complex c2, Complex &c3){
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
}

int main(){
    Complex c1(20,32);
    Complex c2(18,7);
    Complex c3;
    sum(c1,c2,c3);
    c3.display();

    return 0;
}