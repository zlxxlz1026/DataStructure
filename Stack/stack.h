//
// Created by zhulixi on 2020/7/22.
//

#ifndef DATA_STRUCTURE_STACK_H
#define DATA_STRUCTURE_STACK_H
#include<bits/stdc++.h>
using namespace std;
struct Node;
typedef Node* PtrNode;
typedef PtrNode Stack;
typedef int ElementType;

int isEmpty(Stack S);
Stack createStack();
void makeEmpty(Stack S);
void push(ElementType x,Stack S);
ElementType top(Stack S);
void pop(Stack S);
void printStack(Stack S);

struct Node{
    ElementType Element;
    PtrNode next;
    Node(){
        Element = -1;
        next = nullptr;
    }
    Node(ElementType x):Element(x),next(nullptr){}
};
#endif //DATA_STRUCTURE_STACK_H
