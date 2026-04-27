/*6.	Implement a base class Book with attributes title, author, and price. 
Then, create a derived class Textbook that inherits from Book and adds a new attribute subject. 
how single inheritance is used to manage the data for general books and textbooks.*/
#include <iostream>
#include<cstring>
using namespace std;
class book{
    public:
    char title[20];
    char author[20];
    int price;
    book(char t[], char a[], int p){
        strcpy(title, t);
        strcpy(author, a);
        price =p;
    }
    void display(){
        cout<<"title- "<<title<<", author- "<<author<<", price- "<<price<<endl;
    }
};
class textbook : public book{
    public:
    char subject[20];
    textbook(char t[], char a[], int p, char s[]) :book(t,a,p){
        strcpy(subject,s);
    }
    void show(){
        display();
        cout<<"subject- "<<subject<<endl;
    }
};

int main(){
    textbook txtb("no exit","sarte",670,"philosophy");
    txtb.show();



    return 0;
}