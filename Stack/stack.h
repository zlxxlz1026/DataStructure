//
// Created by zhulixi on 2020/5/24.
//

#ifndef DATASTRUCTURE_STACK_H
#define DATASTRUCTURE_STACK_H
struct Node;
typedef Node *PtrNode;
typedef PtrNode Stack;
typedef int ElementType;

bool isEmpty(Stack S);
Stack createStack(void );
void makeEmpty(Stack S);
void push(ElementType x,Stack S);
void pop(Stack S);
ElementType top(Stack S);
void printStack(Stack S);

struct Node{
    ElementType Element;
    PtrNode Next= nullptr;
};
#endif //DATASTRUCTURE_STACK_H
