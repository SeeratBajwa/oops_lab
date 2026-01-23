/*
% --> remainder
/ --> quotient
*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==0) return -1;
    else if(a%2 == 0){
        cout<<"even";
    }
    else
    cout<<"odd";



    return 0;
}