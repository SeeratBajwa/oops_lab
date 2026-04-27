/*5.5.	Design overloaded versions of a function template process() such that:
i)Accepts a single parameter 
ii)Accepts two parameters of the same type 
iii) Accepts two parameters of different types
*/
#include <iostream>
using namespace std;

template <typename t>
void process(t x){
    cin>>x;
    cout<<x<< endl;
}

template <typename t>
void process(t x, t y){
    cin>>x>>y;
    cout <<x << "," <<y<< endl;
}

template <typename t, typename z>
void process(t x, z y){
    cin>>x;
    cin>>y;
    cout <<x<< "," <<y<<endl;
}

int main(){
    int x; 
    float a,b;
    int c; string d;
    process(x);
    process(a,b);
    process(c,d);
}