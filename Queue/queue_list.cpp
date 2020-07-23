//
// Created by zhulixi on 2020/7/23.
//

#include "queueu_list.h"

Queue createQueue(){
    Queue Q = new QueueRecord;
    Q->size = 0;
    Q->head = nullptr;
    Q->tail = nullptr;
    return Q;
}

int isEmpty(Queue Q){
    return Q->size==0;
}

void enqueue(ElementType x,Queue Q){
    PtrNode tmp = new Node;
    tmp->Element = x;
    if(Q->head== nullptr){
        Q->tail = tmp;
        Q->head = Q->tail;
    }
    else{
        Q->tail->next = tmp;
        Q->tail = Q->tail->next;
    }
    Q->size++;
}

void dequeue(Queue Q){
    if(isEmpty(Q)){
        cout<<"the queue is empty"<<endl;
    }
    PtrNode tmp = Q->head;
    Q->head = Q->head->next;
    free(tmp);
    Q->size--;
}

ElementType front(Queue Q){
    if(isEmpty(Q)){
        return -1;
    }
    return Q->head->Element;
}

ElementType rear(Queue Q){
    if(isEmpty(Q)){
        return -1;
    }
    return Q->tail->Element;
}

void printQueue(Queue Q){
    if(isEmpty(Q)){
        return;
    }
    PtrNode now = Q->head;
    while(now!= nullptr){
        cout<<now->Element<<" ";
        now = now->next;
    }
    cout<<endl;
}