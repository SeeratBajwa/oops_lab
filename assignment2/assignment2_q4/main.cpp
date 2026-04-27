
#include <iostream>
using namespace std;
//by default var are private in cpp class

class rectangle{
public:

int width;
int height;

void getData(){
cout<<"\nwidth= ";
cin>>width;
cout<<"\nheight= ";
cin>>height;
}
void calcArea(){
int area= width * height; 
cout<<"\narea is= "<<area;
}
};

int main(){
rectangle r;
r.getData();
r.calcArea();
return 0;
}