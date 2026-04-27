#include <iostream>
#include <string>
using namespace std;
class book {
public:
    string title;
    string author;
    string isbn;
    book() {
        this->title = "";
        this->author = "";
        this->isbn = "";
    }
    book(string title, string author, string isbn) {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }
    book(const book &b) {
        this->title = b.title;
        this->author = b.author;
        this->isbn = b.isbn;
    }
};

class library {
public:
    book b[100];
    int cnt;
    library() {
        cnt = 0;
    }
    bool addNewbook(string &title, string &author, string &isbn) {
        if (cnt >= 100) return false;
        book temp(title, author, isbn);
        b[cnt] = temp;
        cnt++;
        return true;
    }
    bool removeb(string &isbn) {
        for (int i = 0; i < cnt; i++) {
            if (b[i].isbn == isbn) {
                for (int j = i; j < cnt - 1; j++) {
                    b[j] = b[j + 1];
                }
                cnt--;
                return true;
            }
        }
        return false;
    }
    void displayDetails() {
        for (int i = 0; i < cnt; i++) {
            cout << b[i].title << ", "<< b[i].author << ", "<< b[i].isbn << endl;
        }
    }
};

int main() {
    book bk[3] = {
        book("bell jar", "sylvia plath", "111"),
        book("white nights", "dostyovoesky", "222"),
        book("book thief", "markus zusak", "333")
    };
    int n; cin >> n;
    book *db = new book[n];

    for (int i = 0; i < n; i++) {
        string t, a, is;
        cin >> t >> a >> is;
        db[i] = book(t, a, is);
    }

    library lib;
    string title, author, isbn;

    for (int i = 0; i < 5; i++) {
        cin >> title >> author >> isbn;
        lib.addNewbook(title, author, isbn);
    }

    lib.displayDetails();
    cin >> isbn;
    lib.removeb(isbn);

    lib.displayDetails();

    delete[] db;
    return 0;
}