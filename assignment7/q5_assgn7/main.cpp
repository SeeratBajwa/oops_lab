#include<iostream>
using namespace std;
class Time{
    public:
    int h,m,s;
    Time(){}
    Time(int hr,int min,int sec){
        h=hr;
        m=min;
        s=sec;
    }

    Time operator + (Time t){
        Time temp;
        temp.s=s +t.s;
        temp.m =m+t.m+temp.s/60;
        temp.s=temp.s%60;
        temp.h=h+t.h+temp.m/60;
        temp.m=temp.m%60;
        return temp;
    }

    void show(){
        cout<<"Time is= "<<h<<":"<<m<<":"<<s;
    }
};

int main(){
    Time t1(12,11,52),t2(19,88,1),t3;
    t3 = t1 + t2;
    t3.show();
    return 0;
}