#include<iostream>
#include<cmath>
using namespace std;
class polar{
public:
    float r, t;
    polar(float r1, float t1){
        r = r1;
        t = t1;
    }
};
class cartesian{
    public:
    float x, y;
    
    cartesian(polar p){
        x = p.r*cos(p.t);
        y = p.r*sin(p.t);
    }
    void show(){
        cout<<"x = "<<x<<" y = "<<y;
    }
};
int main(){
    polar p(10,5);
    cartesian c = p;   
    c.show();
}