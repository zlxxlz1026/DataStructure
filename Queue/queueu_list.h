//
// Created by zhulixi on 2020/7/23.
//

#ifndef DATA_STRUCTURE_QUEUEU_LIST_H
#define DATA_STRUCTURE_QUEUEU_LIST_H
#include<bits/stdc++.h>
using namespace std;
struct Node;
struct QueueRecord;
typedef struct QueueRecord* Queue;
typedef struct Node* PtrNode;
typedef int ElementType;

int isEmpty(Queue Q);
Queue createQueue();
void enqueue(ElementType x,Queue Q);
void dequeue(Queue Q);
ElementType front(Queue Q);
ElementType rear(Queue Q);
void printQueue(Queue Q);

struct QueueRecord{
    PtrNode head;
    PtrNode tail;
    size_t size = 0;
};
struct Node{
    ElementType Element;
    PtrNode next;
    Node(){
        Element = -1;
        next = nullptr;
    }
};

#endif //DATA_STRUCTURE_QUEUEU_LIST_H
