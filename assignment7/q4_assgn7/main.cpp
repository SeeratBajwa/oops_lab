#include<iostream>
using namespace std;

class student{
public:
    int rollno;
    int score;
    virtual void input()=0;
    virtual void display()=0;
};

class engineering : public student{
public:
    void input(){
        cout<<"\nenter roll number and score- ";
        cin>>rollno>>score;
    }
    void display(){
        cout<<"engineering- "<<rollno<<", "<<score<<"\n";
    }
};

class medicine : public student{
public:
    void input(){
        cout<<"\nenter roll number and score- ";
        cin>>rollno>>score;
    }
    void display(){
        cout<<"medicine- "<<rollno<<", "<<score<<"\n";
    }
};

class science : public student{
public:
    void input(){
        cout<<"\nenter roll number and score- ";
        cin>>rollno>>score;
    }
    void display(){
        cout<<"science- "<<rollno<<", "<<score<<"\n";
    }
};

int main(){
    student* s[3];
    engineering e;
    medicine m;
    science sci;

    s[0]=&e;
    s[1]=&m;
    s[2]=&sci;

    for(int i=0;i<3;i++){
        s[i]->input();
    }

    for(int i=0;i<3;i++){
        s[i]->display();
    }

    return 0;
}