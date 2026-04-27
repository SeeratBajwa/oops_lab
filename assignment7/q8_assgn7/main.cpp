/*8.Overload '[]' to check array index out of bounds problem at run time*/
#include <iostream>
using namespace std;

class arr{
    public:
    int a[100];
    int n;
    void input(){
        cout<<"\nenter number of elemnts in array= ";
        cin>>n;
        cout<<"\nenter elements=\n";
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
    }
    int operator [] (int indx) {
        if(indx<0 || indx>=n) {
            cout<<"\nout of bounds";
            return -1;
        }
        return a[indx];
    }
};

int main(){
    arr A;
    A.input();
  int i;
    cout<<"\nenter index= ";
    cin>>i;
    int val= A[i];   
    if(val!=-1)
        cout<<"\nvalue= "<<val<<endl;

    return 0;
}