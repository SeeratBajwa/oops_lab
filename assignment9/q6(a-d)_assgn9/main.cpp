/*Q6*/
#include <iostream>
#include<fstream>
using namespace std;
int main(){
   ofstream file("a-z.txt", ios::binary);
   for(char c='a';c<='z';c++){
       file<<c;
   }
   
   fstream fi("a-z.txt", ios::in | ios::out|ios::binary);
   fi.seekp(5);
   fi<<"D";
   fi.close();
   
     ifstream fin("a-z.txt",ios::binary);
     
   fi.seekg(10);
   char ch;
   fi.get(ch);
   cout<<endl<<ch;
   fi.close();
   
   fin.seekg(0,ios::end);
   int size=fin.tellg();
   cout<<endl<<size;
   
   fin.seekg(ios::end);
   char c;
   fin.get(c);
   cout<<endl<<c;
   
   fin.seekg(-1,ios::end);
   char l;
   fin.get(l);
   cout<<endl<<l;
   fin.close();

    return 0;
}