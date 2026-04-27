
#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    
public:
Rectangle(){ //a)
    length =0;
    breadth=0;
}
Rectangle(int l, int b){ //b)
    length=l;
    breadth=b;
}
Rectangle(int side){ //c)
    length=side;
    breadth=side;
}
int area(){
    return length*breadth;
}
};
int main(){
    Rectangle r1;
    cout<<"Area with no parameters: "<<r1.area()<<endl;
    Rectangle r2(4,6);
    cout<<"Area with 2 parametrs: "<<r2.area()<<endl;
    Rectangle r3(5);
    cout<<"Area with one parameter: "<<r3.area()<<endl;

    return 0;
}