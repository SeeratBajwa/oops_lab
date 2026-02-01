/*Write a program using Array of Objects to display area of multiple rectangles*/
#include <iostream>
using namespace std;

class rectangle{
    int length;
    int width;
    public:
    void input(){
        cin>>length;
        cin>>width;
    }
    public:
    void area(){
        cout<<"\narea is= "<<length*width;
    }
};

int main(){
    int n;
    cout<<"n= \n";
    cin>>n;
    rectangle r[n];
    for(int i=0; i<n; i++){
        cout<<"\nenter length and width of "<<i+1<<"= ";
        r[i].input();
    }
    for(int i=0; i<n; i++){
        r[i].area();
    }
    
    return 0;
}