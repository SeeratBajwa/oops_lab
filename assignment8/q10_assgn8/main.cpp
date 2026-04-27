/*5. Create a class template to input and display Array elements*/
#include<iostream>
using namespace std;
template <typename t>
class Array{
public:
    t a[30];
    int n;
    void input(){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
};

int main(){
    Array<int> arr;
    arr.input();
    arr.display();

    return 0;
}