/*8. you are tasked with creating a system for a library that tracks different types of users. 
The system needs to handle general user information such as name, ID, and contact details. 
There are two specific types of users: Student and Teacher. Each type of user has additional attributes,
such as grade level for students and department for teachers. 
Implement a base class LibraryUser with general attributes. 
Then, create two derived classes Student and Teacher that inherit from LibraryUser and add their own specific attributes. 
Demonstrate how hierarchical inheritance is applied in this scenario.*/
#include <iostream>
#include<cstring>
using namespace std;
class libraryuser{
public:
    char name[32];
    int id;
    char contact[32];
    libraryuser(char n[], int i, char c[]){
        strcpy(name,n);
        id=i;
        strcpy(contact,c);
    }
    void display(){
        cout<<"name- "<<name<<endl;
        cout<<"id- "<<id<<endl;
        cout<<"contact- "<<contact<<endl;
    }
};

class student : public libraryuser{
public:
    int grade;
    student(char n[], int i, char c[], int g) : libraryuser(n,i,c){
        grade=g;
    }
    void show(){
        display();
        cout<<"grade- "<<grade<<endl;
    }
};

class teacher : public libraryuser{
public:
    char dept[32];
    teacher(char n[], int i, char c[], char d[]) : libraryuser(n,i,c){
        strcpy(dept,d);
    }
    void show(){
        display();
        cout<<"department- "<<dept<<endl;
    }
};

int main(){

    student s("rumi",111,"108989",10);
    teacher t("shamz",201,"1000245","enc");
    s.show();
    cout<<endl;
    t.show();

    return 0;
}