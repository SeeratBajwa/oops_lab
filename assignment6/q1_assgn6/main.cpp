#include <iostream>
#include <string>
using namespace std;

class book{
public:
    string title, author;
    int isbn;
};

class library {
    public:
    book b[100];
    int cnt;
    library() { cnt = 0; }
    bool addNewBook(string &title, string &author, int &isbn);
    bool removeBooks(int &isbn);
    void displayDetails() {
    for (int i = 0; i < cnt; i++) {
        cout << b[i].title << ", "<< b[i].author << ", "<< b[i].isbn << endl;
    }
}
};

bool library::addNewBook(string &title, string &author, int &isbn) {
    if (cnt >= 100)
        return false;
    b[cnt].title = title;
    b[cnt].author = author;
    b[cnt].isbn = isbn;
    cnt++;
    return true;
}

bool library::removeBooks(int &isbn) {
    for (int i = 0; i < cnt; i++) {
        if (b[i].isbn == isbn) {
            for (int j = i; j < cnt - 1; j++){
                b[j] = b[j + 1];  
        }
            cnt--;
            return true;
        }
    }
    return false;
}

int main(){
    library l;
    string title,author;
    int isbn;
    for(int i=0;i<5;i++){
        cout<<"\ntitle= "; getline(cin,title);
        cout<<"\nauthor= "; getline(cin,author);
        cout<<"\nisbn= "; cin>>isbn;
            cin.ignore();
        l.addNewBook(title, author, isbn);
    }
    
    l.displayDetails();
    
    int i;
    cout<<"\nisbn of book to be removed= ";
    cin>>i;
    l.removeBooks(i);
    cout << "\nAfter removal:\n";
    l.displayDetails();
    return 0;
}