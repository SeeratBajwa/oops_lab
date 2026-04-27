/*5.	Write a program to implement I/O operations on characters. I/O operations include inputting a string, calculating the length of the string, storing the string in a file and fetching the stored characters from it.*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int l = s.length();
    cout<<"\nlength="<<l<<endl;
    ofstream file("string.txt");
    file<<s;
    file.close();
    
    ifstream fin("string.txt");
    char ch;
    while(fin.get(ch)){
        cout<<ch;
    }
    fin.close();

    return 0;
}