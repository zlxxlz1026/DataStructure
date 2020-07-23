//
// Created by zhulixi on 2020/7/23.
//

#include "queueu_list.h"

int main()
{
    Queue Q = createQueue();
    cout<<isEmpty(Q)<<endl;
    enqueue(1,Q);
    enqueue(2,Q);
    enqueue(3,Q);
    enqueue(4,Q);
    enqueue(5,Q);
    printQueue(Q);
    cout<<front(Q)<<endl;
    cout<<rear(Q)<<endl;
    dequeue(Q);
    printQueue(Q);
    enqueue(99,Q);
    printQueue(Q);
}