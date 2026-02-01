/*Write a program to implement (a) pointer to an object (b) this pointer. Practice both ‘.’ (dot operator) and ‘→’ (arrow operator).*/
#include<iostream>
#include<cstring>
using namespace std;

class student{
    public:
    char name[10];
    int age;
 //constructor  
    student(const char name[], int age) //NOT name[10] cuz constructor receives values, doesnt alloc memory
    {
        this->age = age; //this pointer
        strcpy(this->name,name);
    }
    void display(){
        cout<<"\nname= "<<name<<" age= "<<age<<endl;
    }
};
int main(){
    student s("seerat", 19);
    s.display(); //dot operator
    
    student *ptr = &s;
    ptr->display(); //arrow operator; ptr to object
    
    return 0;
}