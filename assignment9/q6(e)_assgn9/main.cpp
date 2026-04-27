/*Q6*/
#include <iostream>
#include<fstream>
using namespace std;
int main(){
   
   ofstream fout("data.txt");
   string s = "hello world, this is cpp";
   fout<<s;
   fout.close();
   
   ifstream fin("data.txt");
   fin.seekg(10);
   cout<<fin.tellg()<<endl;
   
   char c;
   while(fin.get(c)){
       cout<<c;
   }
   fin.close();

    return 0;
}