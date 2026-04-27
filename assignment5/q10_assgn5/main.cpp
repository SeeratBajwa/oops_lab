/*You are developing a software system for an academic institution. The institution has various roles like Person, Staff, and Student. 
A Person has general attributes like name and address. Staff members, who are a type of Person, have additional attributes like employee_id and department. 
Student, another type of Person, has attributes like student_id and grade. 
Some Staff members are also Students (e.g., teaching assistants) and need to inherit from both classes. 
Implement a base class Person with general attributes. Then, create derived classes Staff and Student that inherit from Person and 
add their specific attributes. Finally, create a TeachingAssistant class that inherits from both Staff and Student. 
Demonstrate how hybrid inheritance is applied and managed in this scenario*/
#include <iostream>
#include <cstring>
using namespace std;
class person{
public:
    char name[32];
    char address[60];
    person(char n[], char a[]){
        strcpy(name,n);
        strcpy(address,a);
    }
    void showperson(){
        cout<<"\nname- "<<name;
        cout<<"\naddress- "<<address<<endl;
    }
};

class staff : virtual public person{
public:
    int employee_id;
    char department[35];
    staff(char n[], char a[], int e, char d[]) : person(n,a){
        employee_id=e;
        strcpy(department,d);
    }
    void showstaff(){
        cout<<"employee id- "<<employee_id<<endl;
        cout<<"department- "<<department<<endl;
    }
};

class student : virtual public person{
public:
    int student_id;
    char grade[10];
    student(char n[], char a[], int s, char g[]) : person(n,a){
        student_id=s;
        strcpy(grade,g);
    }
    void showstudent(){
        cout<<"student id- "<<student_id<<endl;
        cout<<"grade- "<<grade<<endl;
    }
};

class teachingassistant : public staff, public student{
public:
    teachingassistant(char n[], char a[], int e, char d[], int s, char g[])
    : person(n,a), staff(n,a,e,d), student(n,a,s,g) {}
    void display(){
        showperson();
        showstaff();
        showstudent();
    }
};

int main(){
    teachingassistant t("anshika","india",111,"enc",89,"A");
    t.display();

    return 0;
}