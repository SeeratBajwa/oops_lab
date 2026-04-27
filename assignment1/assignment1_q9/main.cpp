#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
   cout<<"enter a and b"<<endl;
    cin >> a >> b >> op;

    switch (op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if (b != 0)
                cout << a / b;
            else
                cout << "undefined";
            break;
        default:
            cout << "operator not applicable";
    }

    return 0;
}
