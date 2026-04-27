#include <iostream>
using namespace std;

class shape{
 public:
    virtual void area()=0;
    virtual void display(){}
};

class circle : public shape{
    public:
    int rad;
    void input(){
        cout<<"enter radius\n";
        cin >> rad;
    }
    void area(){
        cout << 3.14*rad*rad <<"\n";
    }
    void display(){
        cout << "circle" <<"\n";
    }
};

class rectangle : public shape{
    public:
    int len,wid;
    void input(){
        cout<<"enter length and width\n";
        cin >> len >>wid;
    }
    void area(){
        cout << len*wid <<"\n";
    }
    void display(){
        cout << "rectangle" <<"\n";
    }
};

class triangle : public shape{
    public:
    float base,hi;
    void input(){
        cout<<"enter base and height\n";
        cin >>base>> hi;
    }
    void area(){
        cout << 0.5*base*hi <<"\n";
    }
    void display(){
        cout << "triangle" <<"\n";
    }
};

int main(){
    circle c;
    rectangle r;
    triangle t;

    c.input();
    c.display();
    c.area();

    r.input();
    r.display();
    r.area();

    t.input();
    t.display();
    t.area();
    
    return 0;
}