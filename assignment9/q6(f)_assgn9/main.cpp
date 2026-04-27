/*Q6*/
#include <iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream fout("file.txt", ios::binary);
    string s = "HelloWorld";
    fout<<s;
    for(char ch : s){
        fout.put(ch);
        cout<<"tell(p)= "<<fout.tellp()<<endl;
    }
    fout.close();
    
    ofstream fin("file.txt", ios::in|ios::out|ios::binary);
    fin.seekp(5);
    fin.write("C++  ",5);
    fin.close();

    return 0;
}