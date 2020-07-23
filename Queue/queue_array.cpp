//
// Created by zhulixi on 2020/7/23.
//

#include "queue_array.h"

int isEmpty(Queue Q){
    return Q->head==Q->tail;
}

int isFull(Queue Q){
    return (Q->tail+1)%Q->capacity==Q->head;
}

Queue createQueue(int MaxElements){
    Queue Q = new QueueRecord;
    Q->capacity = MaxElements+1;
    //这里没有使用size标记而是使用了牺牲一个空间
    Q->array = new ElementType[Q->capacity];
    return Q;
}

void enqueue(ElementType x,Queue Q){
    if(isFull(Q)){
        cout<<"there is no space for this Element"<<endl;
        return;
    }
//    Q->size++;
    Q->array[Q->tail] = x;
    Q->tail = (Q->tail+1)%Q->capacity;
}

void dequeue(Queue Q){
    if(isEmpty(Q)){
        cout<<"the queue is empty!"<<endl;
        return;
    }
//    Q->size--;
    Q->head = (Q->head+1)%Q->capacity;
}

ElementType front(Queue Q){
    if(isEmpty(Q)){
        return -1;
    }
    return Q->array[Q->head];
}

ElementType rear(Queue Q){
    if(isEmpty(Q)){
        return -1;
    }
    //注意取模
    return Q->array[(Q->tail-1+Q->capacity)%Q->capacity];
}

void printQueue(Queue Q){
    int now = Q->head;
    while(now!=Q->tail){
        cout<<Q->array[now]<<" ";
        now = (now+1)%Q->capacity;
    }
    cout<<endl;
}