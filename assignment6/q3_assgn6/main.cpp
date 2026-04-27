#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class account{
    public:
    const long acc_num;
    long transID;
    string transType;
    double balance;
    
    account(const long a, const long t, const string tt, const double b):acc_num(a){
        transID=t;
        transType=tt;
        balance=b;
    }
    
    long depositAmount(const long acc_num, const long acc_numm, const int amount){
        balance=balance-amount;
        transType="debit";
        return transID;
    }
    long creditAmount(const long acc_num, const long acc_numm, const int amount){
        balance += amount;
        transType="credit";
        return transID;
    }
    void displayDetails() const {
        cout<<"acc details: "<<endl;
            cout<<"acc number: "<<acc_num
            <<", remaining balance: "<<balance
            <<", transaction history: "<<transType<<endl;
        }
    };

int main(){
   account A(101,80,"debit",1000);
   account B(22,200,"credit",8000);
   account C(343,280,"credit",150);
   account D(444,480,"debit",25000);
   account E(729,500,"credit",3000);

   A.depositAmount(101,202,505);
   B.creditAmount(221,899,900);
   A.displayDetails();
   B.displayDetails();

   C.depositAmount(322,233,890);
   D.creditAmount(303,627,200);
   C.displayDetails();
   D.displayDetails();

   E.depositAmount(555,111,300);
   A.creditAmount(555,111,300);
   E.displayDetails();
   A.displayDetails();

   return 0;
}