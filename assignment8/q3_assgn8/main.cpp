/*3.	Write a function template to sort an array using bubble sort*/
#include <iostream>
using namespace std;

template <typename t>
 void swap(t &x, t &y){
     t temp=x;
     x=y;
     y=temp;
 }

template <typename t>
void bubble(t arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n-i-1; j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

int main(){
    float arr[5] = {8.2, 6.9, 10.8, 1.1, 2.3};
    bubble(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}