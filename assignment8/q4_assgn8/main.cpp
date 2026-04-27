/*4. Write a function template to perform linear search.*/
#include <iostream>
using namespace std;

template <typename t>
void linear(t arr[], int n, t s){
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            cout<<"\nfound";
            found=true;
            break;
        }
    }
    if(!found) cout<<"not found";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    linear(arr,n,25);
    return 0;
}