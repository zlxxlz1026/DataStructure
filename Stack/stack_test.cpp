//
// Created by zhulixi on 2020/5/24.
//

#include "stack.h"
#include<bits/stdc++.h>
using namespace std;


int main(){
    Stack S = createStack();
    push(3,S);
    push(4,S);
    push(5,S);
//    printStack(S);
//    cout<<top(S)<<endl;
    pop(S);
//    printStack(S);
    makeEmpty(S);
    printStack(S);
}