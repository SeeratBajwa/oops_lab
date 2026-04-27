/*4.Write small C++ codes for each inheritance type*/
#include <iostream>
using namespace std;

//1.single inheritance
class A{
public:
    void showA(){
        cout<<"class A"<<endl;
    }
};

class B : public A{
public:
    void showB(){
        cout<<"class B"<<endl;
    }
};

//2.multilevel inheritance
class C : public B{
public:
    void showC(){
        cout<<"class C"<<endl;
    }
};


//3.hierarchical inheritance
class D : public A{
public:
    void showD(){
        cout<<"class D"<<endl;
    }
};

class E : public A{
public:
    void showE(){
        cout<<"class E"<<endl;
    }
};

//4.multiple inheritance
class F{
public:
    void showF(){
        cout<<"class F"<<endl;
    }
};

class G{
public:
    void showG(){
        cout<<"class G"<<endl;
    }
};

class H : public F, public G{
public:
    void showH(){
        cout<<"class H"<<endl;
    }
};

//5.hybrid inheritance 
class I : public H, public C{
public:
    void showI(){
        cout<<"class I"<<endl;
    }
};

int main(){
    B b; b.showA(); b.showB();          // single
    C c; c.showA(); c.showB(); c.showC(); // multilevel
    D d; d.showA(); d.showD();          // hierarchical
    H h; h.showF(); h.showG(); h.showH(); // multiple
    I i; i.showI();                     // hybrid

    return 0;
}