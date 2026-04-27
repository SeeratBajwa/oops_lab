/*4.	Write a program to copy the contents of one file to another.*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream fin("file1.txt");
    ofstream fout("file2.txt");
    char ch;

    while(fin.get(ch)){
        fout << ch;
    }

    fin.close();
    fout.close();
}