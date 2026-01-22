#include <iostream>
#include<complex>
using namespace std;

class Complex{ //encapsulation
    float real; //data members should be private for encapsulation
    float imag;
 
public:   
void setComplex(float r, float i){
    real = r; //cuz private data members cannot be accessed directly->convert to public
    imag = i;
}
void dispComplex(){
    cout<<real<<'+'<<imag<<'i'<<endl;
}

Complex addComp(Complex c){ //passing the object as arguement
    Complex temp;
    temp.real = real + c.real; //c=c1- called object, c.real=c2- passed object
    temp.imag = imag + c.imag;
    return temp;
}
};

int main(){
  Complex c1, c2, sum;
  float r,i;
  cout<<"enter real and imag part of c1: ";
    cin>>r>>i;
    c1.setComplex(r,i);
    cout<<"\nenter real and imag part of c2: ";
    cin>>r>>i;
    c2.setComplex(r,i);
    
sum = c1.addComp(c2);

  cout<<"\nsum= ";
  sum.dispComplex();

    return 0;
}