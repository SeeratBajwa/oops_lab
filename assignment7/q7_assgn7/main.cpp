//Write a program in C++ to create a class matrix and overload * operator using friend function to multiply two matrices
#include <iostream>
using namespace std;

class matrix{
    public:
    int m[3][3];
    int row,col;
    void input(){
        cout<<"\nenter row and col- ";
        cin>>row>>col;
        cout<<"\nenter matrix elements- "<<endl;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>m[i][j];
            }
        }
    }
    void show(){
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                cout << m[i][j] << " ";
            }
            cout<<endl;
    }
    
}
friend matrix operator * (matrix m1, matrix m2);
};

matrix operator * (matrix m1, matrix m2){
    matrix temp;
    temp.row=m1.row;
    temp.col=m2.col;
    for(int i=0; i<m1.row;i++){
        for(int j=0;j<m2.col;j++){
            temp.m[i][j]=0;
            for(int k=0; k<m1.col; k++){
                temp.m[i][j] += m1.m[i][k] * m2.m[k][j];
            }
            
        }
    }
    return temp;
}

int main(){
    matrix m1,m2,ans;
    cout<<"\nenter matrix 1- "<<endl;
    m1.input();
    cout<<"\nenter matrix 2- \n";
    m2.input();
    ans = m1*m2;
    cout<<"\nmutliplied matryx=\n";
    ans.show();

    return 0;
}