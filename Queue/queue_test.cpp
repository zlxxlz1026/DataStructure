//
// Created by zhulixi on 2020/5/27.
//

#include "queue.h"

int main()
{
    Queue<int,5> Q;
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    Q.enqueue(5);
    cout<<Q.isFull()<<endl;
    Q.print();
    Q.dequeue();
    Q.print();
    Q.enqueue(6);
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    cout<<Q.isEmpty()<<endl;
}