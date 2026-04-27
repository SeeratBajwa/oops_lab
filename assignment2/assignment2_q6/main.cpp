
#include <iostream>
int num = 100;
class scopes{
    int num;
    int date;
public:
//declaration
void getnum(int num, int date);
void disp();
};
//define outside class
void scopes::getnum(int n, int d){
    num=n;
    date=d;
}
void scopes::disp(){
    std::cout<<"\nnum = "<<num<<" & date = "<<date;
}

class Stats{
    public:
    static int stat;
};
int Stats::stat = 10;

int main()
{
    int num=50;
    std::cout<<"\nlocal num= "<<num;
    std::cout<<"\nglobal num= "<<::num;
    scopes s;
    int n,d;
    std::cout<<"\nnum= ";
    std::cin>>n;
    std::cout<<"\ndate= "<<std::endl;;
    std::cin>>d;
    s.getnum(n,d);
    s.disp();
    
    std::cout<<Stats::stat;
    std::cout << "\nUsing std::cout and std::cin" << std::endl;

    return 0;
}