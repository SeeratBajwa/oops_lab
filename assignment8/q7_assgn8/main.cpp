/*2. Develop a class template for queue with enqueue and dequeue operations.*/
#include <iostream>
using namespace std;

template <class t>
class queue{
public:
    t q[100];
    int front;
    int rear;

    queue(){
        front=0;
        rear=-1;
    }

    void enqueue(t x){
        if(rear==99)
            cout<<"queue overflow";
        else
            q[++rear]=x;
    }

    void dequeue(){
        if(front>rear)
            cout<<"queue underflow";
        else
            cout<<"dequeued= "<<q[front++]<<"\n";
    }
};

int main(){
    queue<int> q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(28);
    q.dequeue();
    q.dequeue();

    return 0;
}