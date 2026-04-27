
 // OnLine C++ compiler to run C++ program online
 #include <iostream>
 using namespace std;

struct student{
char Name[20];
int RollNo;
char Degree[10];
char Hostel[5];
int cgpa;

void addDetails(){
cout<<"roll= ";
cin>>RollNo;
cout<<"\nDegree= ";
cin>>Degree;
cout<<"\nname= ";
cin>>Name;
cout<<"\ncgpa= ";
cin>>cgpa;
cout<<"\nhostel= ";
cin>>Hostel;
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
updateHostel();
updateCgpa();
}

void displayDetails(){

cout<<"\nrollno= "<<RollNo;
cout<<"\nname= "<<Name;
cout<<"\ndegree= "<<Degree;
cout<<"\nhostel= "<<Hostel; 
cout<<"\ncgpa= "<<cgpa;
}
};

int main(){
student s;
s.addDetails();
s.displayDetails();
s.updateDetails();
s.displayDetails();

return 0;

}