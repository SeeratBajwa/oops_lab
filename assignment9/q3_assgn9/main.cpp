//3.Write a program to perform read/write binary I/O operation on a file (i.e. write the object of the class to a file)
#include <iostream>
#include <fstream>
using namespace std;
class data{
    int x;
public:
    void input(){
        cin >> x;
    }
    void display(){
        cout << x;
    }
};

int main(){
    data d;
    ofstream fout("file.dat", ios::binary);
    d.input();
    fout.write((char*)&d, sizeof(d));
    fout.close();
    ifstream fin("file.dat", ios::binary);
    fin.read((char*)&d, sizeof(d));
    fin.close();

    d.display();
    return 0;
}