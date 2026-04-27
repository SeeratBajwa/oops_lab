/*4.	Write a program to demonstrate the working of friend class.*/
#include <iostream>
using namespace std;
class length{
    private:
    int len;
    public:
length(int len){
    this->len = len;
}
friend class area;
};

class area{
    public:
    void display(length l){
        int ar = l.len*l.len;
        cout<<"area= "<<ar;
    }
};
int main(){
    length l(5);
    area a;
    a.display(l);
    
    return 0;
}