//2.	Write a user-defined function in C++ to read the content from a text file NOTES.TXT, count and display the number of alphabets present in it.
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
void countAlphabets(){
    ifstream fin;
    fin.open("NOTES.TXT");
    char ch;
    int count = 0;
    while(fin.get(ch)) {
        if(isalpha(ch)) {  
            count++;
        }
    }
    fin.close();
    cout << "Number of alphabets in file: " << count << endl;
}
int main(){
    countAlphabets();  
    return 0;
}