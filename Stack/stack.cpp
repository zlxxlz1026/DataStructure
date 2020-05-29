//
// Created by zhulixi on 2020/5/24.
//

#include "stack.h"
#include<bits/stdc++.h>
using namespace std;

bool isEmpty(Stack S){
    return S->Next== nullptr;
}

Stack createStack(){
    Stack S = new Node;
    if(S!= nullptr){
        S->Next = nullptr;
    }
    return S;
}

void makeEmpty(Stack S){
    if(S!= nullptr){
        while(!isEmpty(S)){
            pop(S);
        }
    }
}

void push(ElementType x,Stack S){
    PtrNode tmp = new Node;
    if(tmp== nullptr) {
        cout << "not have enough memory" << endl;
        return;
    }
    tmp->Element = x;
    tmp->Next = S->Next;
    S->Next = tmp;
}

void pop(Stack S){
    PtrNode tmp = new Node;
    tmp = S->Next;
    S->Next = tmp->Next;
    delete tmp;
}

ElementType top(Stack S){
    return S->Next->Element;
}

void printStack(Stack S){
    Stack tmp = S->Next;
    while(tmp!= nullptr){
        cout<<tmp->Element<<" ";
        tmp = tmp->Next;
    }
    cout<<endl;
}