/*7.	A software company is creating a program to simulate a car's dashboard. 
The dashboard needs to display speed, fuel level, and temperature. 
The speed is controlled by a Speedometer class, the fuel level by a FuelGauge class, and the temperature by a Thermometer class. 
Implement the three classes: Speedometer, FuelGauge, and Thermometer, each with relevant attributes and methods. 
Then, create a CarDashboard class that inherits from all three classes to display the combined information on the dashboard. 
Demonstrate how multiple inheritance is used	to	build	this	class.*/
#include <iostream>
using namespace std;
class speedom{
public:
    int speed;
    speedom(int s){
        speed = s;
    }
    void showSpeed(){
        cout<<"speed= "<<speed<<" km/h"<<endl;
    }
};

class fuelGaug{
public:
    int fuel;
    fuelGaug(int f){
        fuel = f;
    }
    void showFuel(){
        cout<<"fuel= "<<fuel<<"%"<<endl;
    }
};

class thermom{
public:
    int temp;
    thermom(int t){
        temp = t;
    }
    void showTemp(){
        cout<<"temperature= "<<temp<<" C"<<endl;
    }
};

class carDashboard : public speedom, public fuelGaug, public thermom{
public:
    carDashboard(int s, int f, int t) : speedom(s), fuelGaug(f), thermom(t){}
    void display(){
        showSpeed();
        showFuel();
        showTemp();
    }
};

int main(){
    carDashboard cd(289,15,20);
    cd.display();
    return 0;
}