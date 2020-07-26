//
// Created by zhulixi on 2020/7/23.
//

#include "queue_array.h"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    Queue Q = createQueue(3);
    cout<<isEmpty(Q)<<endl;
    enqueue(1,Q);
    cout<<isEmpty(Q)<<endl;
    enqueue(2,Q);
    enqueue(3,Q);
    cout<<isFull(Q)<<endl;
//    enqueue(4,Q);
    printQueue(Q);
    dequeue(Q);
    printQueue(Q);
    enqueue(9,Q);
    printQueue(Q);
    cout<<front(Q)<<endl;
    cout<<rear(Q)<<endl;
}