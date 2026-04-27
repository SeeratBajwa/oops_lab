/*2.	Write a function template to find the min element in an array.*/
#include <iostream>
using namespace std;

template <typename t>
t fun(t arr[], int n){
    t min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n=5;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"min elm is "<<fun(arr,n);
    
    double darr[] = {3.5, 2.1, 8.9, 10.11};

    cout<<"\nmin elm is= "<<fun(darr,4);
    return 0;
}