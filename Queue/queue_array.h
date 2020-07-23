//
// Created by zhulixi on 2020/7/23.
//

#ifndef DATA_STRUCTURE_QUEUE_ARRAY_H
#define DATA_STRUCTURE_QUEUE_ARRAY_H
#include<bits/stdc++.h>
using namespace std;
struct QueueRecord;
typedef struct QueueRecord* Queue;
typedef int ElementType;

int isEmpty(Queue Q);
int isFull(Queue Q);
Queue createQueue(int MaxElemnts);
void enqueue(ElementType x,Queue Q);
void dequeue(Queue Q);
ElementType front(Queue Q);
ElementType rear(Queue Q);
void printQueue(Queue Q);

struct QueueRecord{
//    int size;
    int head;
    int tail;
    int capacity;
    ElementType* array;
    QueueRecord(){
//        size = 0;
        head = 0;
        tail = 0;
        capacity = 0;
        array = nullptr;
    }
};
#endif //DATA_STRUCTURE_QUEUE_ARRAY_H
