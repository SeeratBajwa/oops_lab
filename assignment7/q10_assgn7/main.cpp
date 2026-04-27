/*10. Write a program in C++ to overload input operator (>>) and output operator (<<).*/
#include <iostream>
using namespace std;

class number{
public:
    int n;
};

istream& operator >> (istream &in, number &x){
    cout<<"\nenter number= ";
    in>>x.n;
    return in;
}

ostream& operator<<(ostream &out, number &x){
    out<<"\nnumber is= "<<x.n<<endl;
    return out;
}

int main(){
    number num;
    cin>>num;
    cout<<num;

    return 0;
}