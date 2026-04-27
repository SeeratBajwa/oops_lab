/*9. Overload '()' to input arbitrary number of input arguments for an object.*/
#include <iostream>
using namespace std;

class arbit{
    public:
    int a[100];
    int n=0;
    void operator () (int size){
        n = size;
        cout<<"\nenter "<<n<<" arbitary num=\n";
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
    }
    void display(){
        cout<<"\narbitary nums are= "<<endl;
        for(int i= 0; i < n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    arbit arb;
    int n;
    cout<<"\nenter number of arbitary numbers needed- ";
    cin>>n;
    arb(n);   
    arb.display();

    return 0;
}