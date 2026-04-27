/*3. Create a class template to store and display a pair of values*/
#include<iostream>
using namespace std;

template <class t>
class pairval{
public:
    t x,y;
    void input(){
        cin>>x>>y;
    }
    void display(){
        cout<<"( "<<x<<", "<<y<<" )\n";
    }
};

int main(){
    pairval<float> p;
    p.input();
    p.display();
pairval<char> pp;
    pp.input();
    pp.display();

    return 0;
}