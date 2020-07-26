//
// Created by zhulixi on 2020/7/22.
//

#include "stack.h"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    Stack S = createStack();
    cout<<isEmpty(S)<<endl;
    push(1,S);
    push(2,S);
    push(3,S);
    push(8,S);
    printStack(S);
    cout<<top(S)<<endl;
    pop(S);
    printStack(S);
    makeEmpty(S);
    printStack(S);
}