//
// Created by zhulixi on 2020/7/22.
//

#include "stack.h"

Stack createStack(){
    Stack S = new Node;
    return S;
}

int isEmpty(Stack S){
    if(S== nullptr){
        cout<<"please bulid a stack"<<endl;
        return -1;
    }
    return S->next== nullptr;
}

void makeEmpty(Stack S){
    if(S== nullptr) return;
    while(!isEmpty(S)){
        pop(S);
    }
}

void pop(Stack S){
    if(isEmpty(S)){
        cout<<"Stack is empty"<<endl;
        return;
    }
    PtrNode tmp = S->next;
    S->next = tmp->next;
    delete tmp;
}

void push(ElementType x,Stack S){
    PtrNode tmp = new Node(x);
    tmp->next = S->next;
    S->next = tmp;
}

ElementType top(Stack S){
    return S->next->Element;
}

void printStack(Stack S){
    PtrNode tmp = S->next;
    while(tmp!=nullptr){
        cout<<tmp->Element<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}