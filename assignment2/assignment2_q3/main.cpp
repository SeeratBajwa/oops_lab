#include <iostream>
using namespace std;
//by default var are private in cpp class- 
class student{
 private:

char Name[20];
int RollNo;
char Degree[10];
char Hostel[5];
int cgpa;

void displayDetails(){
cout<<"\nrollno= "<<RollNo;
cout<<"\nname= "<<Name; 
cout<<"\ndegree= "<<Degree;
cout<<"\nhostel= "<<Hostel; 
cout<<"\ncgpa= "<<cgpa;
}

public:

void addDetails(){
cout<<"roll= ";
cin>>RollNo;
cout<<"\nDegree=";
cin>>Degree;
cout<<"\nname=";
cin>>Name;
cout<<"\ncgpa= ";
cin>>cgpa;
cout<<"\nhostel= ";
cin>>Hostel;

displayDetails();
}

void updateHostel(){
cout<<"\nnew hostel= "; 
cin>>Hostel;
}
void updateCgpa(){
cout<<"\nnew cgpa= ";
cin>>cgpa;
}

void updateDetails(){
updateCgpa(); 
updateHostel();
displayDetails();
}
};

int main(){
student s;
s.addDetails();
s.updateDetails();

return 0;
}