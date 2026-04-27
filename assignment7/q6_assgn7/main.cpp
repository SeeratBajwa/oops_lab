//6. Define a class STRING and overload == to compare two strings and + operator for concatenation of two strings.
#include<iostream>
#include<string>
using namespace std;

class STRING{
public:
    string s;
    void input(){
        cin>>s;
    }
    bool operator == (STRING str){
        if(s==str.s)
            return true;
        else
            return false;
    }

    STRING operator + (STRING str){
        STRING temp;
        temp.s = s + str.s;
        return temp;
    }

    void show(){
        cout<<s;
    }
};

int main(){
    STRING s1;
    STRING s2;
    STRING s3;

    s1.input();
    s2.input();

    if(s1==s2)
        cout<<"equal\n";
    else
        cout<<"unequal\n";

    s3 = s1 + s2;
    cout<<"concatenated string= ";
    s3.show();

    return 0;
}