//1.	Write a C++ program to write number 1 to 200 in a data file NUM.TXT.
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("NUM.TXT");  
    for(int i = 1; i <= 200; i++) {
        file << i << endl; 
    }
    file.close();
    cout<<"\nnumbers printed 1-200: ";
    return 0;
}