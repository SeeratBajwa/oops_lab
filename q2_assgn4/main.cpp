#include <iostream>
using namespace std;

class Rectangle {
    // Data members
    int length;
    int breadth;

public:
 Rectangle(int l=0, int b=-1){ //placeholder value->temp object and copies its value into array[i]
    if(b==-1) //only 1 parameter=>square
    breadth = length = l; 
    else{
        length = l;
        breadth = b;
    }
}
 int area(){
    return length*breadth;
}
 ~Rectangle(){
    cout<<"\nrecatngle destroyed";
}
};

int main() {
    int n;
    cout<<"\nenter number of rectangles- ";
    cin>>n;
    Rectangle rectArray[n];
    for(int i=0; i<n; i++){
        int l,b;
        cout<<"\nenter length- ";
        cin>>l;
        cout<<"\nenter breadth- ";
        cin>>b;
        
        if(b==-1)
        rectArray[i] = Rectangle(l);
        else
        rectArray[i] = Rectangle(l,b);
    }
    cout<<"\nareas of recatngles- ";
    for(int i=0; i<n; i++){
        cout<<"\nrecatngle "<<i<<" has area "<<rectArray[i].area();
    }
   

    return 0;
}
