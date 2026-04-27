#include <iostream>
using namespace std;
class convert {
public:
    float val;
    convert(float x) {
        val = x;
    }
    void display() {
        cout << "val = " << val << endl;
    }
};

int main(){
    float f = 8.889;
    convert con = f; 
    con.display();
    return 0;
}