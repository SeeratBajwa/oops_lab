#include <iostream>
using namespace std;

class polygon{
    public:
    int width;
    int height;
    polygon(){}
    public:
    void input(int w, int h){
        width=w;
        height=h;
    }
    virtual int calc_area()=0;

};
class rectangle : public polygon{
    public:
    rectangle():polygon(){}
    int calc_area(){
        return width*height;
    }
};
class triangle : public polygon{
    public:
    triangle():polygon(){}
    int calc_area(){
        return 0.5*width*height;
    }
};

int main(){
    rectangle r;
    r.input(51,6);
    triangle t;
    t.input(15,1);
polygon *p;
p = &r;
cout<<p->calc_area()<<endl;
p=&t;
cout<<p->calc_area()<<endl;

    return 0;
}