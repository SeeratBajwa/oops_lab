#include<iostream>
#include<cmath>
using namespace std;
float area(int base, int height){
    return 0.5*base*height;
}
float area(int side){
    return (1.73 / 4) * side * side;
}
float area(int side, int base, int x){
    int s = (side+side+base)/2;
    return sqrt(s*(s-side)*(s-side)*(s-base));
}

int main(){
    int base, height, side;
    cin>>base>>height>>side;
    cout<<"\narea of right triangle= "<<area(base,height);
    cout<<"\narea of equil triangle= "<<area(side);
cout<<"\narea of isosceles triangle= "<<area(side,base);
    return 0;
}