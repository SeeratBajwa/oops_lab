#include <iostream>
using namespace std;

int main() {
    int days;
    cout<<"days late ="<<endl;
    cin >> days;

    if (days >= 1 && days <= 5) {
        cout << "Fine = Rs. 0.50";
    }
    else if (days >= 6 && days <= 10) {
        cout << "Fine = Rs. 1.00";
    }
    else if (days >= 11 && days <= 30) {
        cout << "Fine = Rs. 5.00";
    }
    else {
        cout << "Membership Cancelled";
    }

    return 0;
}
