
#include <iostream>
using namespace std;

class dynamic_c{
    int num;
    public:
    dynamic_c(int n=0){
        num=n;
        cout<<"\nobject created";
    }
    ~dynamic_c(){
        cout<<"\nobject destroyed";
    }
};

int main(){
//1. integer var
int *iptr = new int;
*iptr = 10;
cout<<"\nint is "<<*iptr;
delete iptr;
//2. float var
float *fptr = new float;
*fptr=2.89;
cout<<"\nfloat is "<<*fptr;
delete fptr;
//3. integer array 
int *iArr= new int[3];
for(int i=0; i<3; i++){
    iArr[i] = i+1;
}
    cout<<"\ninteger array is "<<endl;
    for(int i=0; i<3; i++){
        cout<<iArr[i]<<" ";
    }

delete[] iArr;
//4. float array
float *fArr = new float[3];
for(int j=0; j<3; j++){
    fArr[j]= j+2;
}
    cout<<"\nfloat array is "<<endl;
    for(int j=0; j<3; j++){
        cout<<fArr[j]<<" ";
    }

delete[] fArr;
//5. class object
dynamic_c *d = new dynamic_c(10);
delete d;
//6. array of objects
dynamic_c *dArr = new dynamic_c[3];
delete[] dArr;

    return 0;
}