/*9.	A logistics company needs a software system to manage its vehicle fleet. All vehicles share common attributes like make, model, and year. 
Trucks have additional attributes like load_capacity. Furthermore, refrigerated trucks have a special attribute called temperature_control. 
Implement a base class Vehicle with common attributes. Then, create a derived class Truck that adds the load_capacity attribute. 
Finally, create another derived class RefrigeratedTruck that inherits from Truck and adds the temperature_control attribute. 
Demonstrate how multilevel inheritance works in this case.*/
#include <iostream>
#include <cstring>
using namespace std;
class vehicle{
public:
    char make[25];
    char model[25];
    int year;
    vehicle(char m[], char mo[], int y){
        strcpy(make,m);
        strcpy(model,mo);
        year=y;
    }
    void show(){
        cout<<"make- "<<make<<endl;
        cout<<"model- "<<model<<endl;
        cout<<"year- "<<year<<endl;
    }
};

class truck : public vehicle{
public:
    int load_capac;
    truck(char m[], char mo[], int y, int l): vehicle(m,mo,y){
        load_capac=l;
    }
    void showtruck(){
        show();
        cout<<"\nload capacity- "<<load_capac;
    }
};

class refrigeratedtruck : public truck{
public:
    int temp_control;
    refrigeratedtruck(char m[], char mo[], int y, int l, int t)
    : truck(m,mo,y,l){
        temp_control=t;
    }
    void display(){
        showtruck();
        cout<<"\ntemperature control- "<<temp_control<<endl;
    }
};

int main(){
    refrigeratedtruck r("hyundai","h100",2026,8900,2);
    r.display();

    return 0;
}