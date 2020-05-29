//
// Created by zhulixi on 2020/5/23.
//
#include "list.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    List l = createList(v);
    printList(l);
//    List l1 = new Node;//必须要new 一块空间否则只是一个什么也不指向的野指针
//    l1->next = new Node;
//    cout<<isLast(l1->next)<<endl;
//    List tmp = l;
//    while(tmp->Element!=3){
//        tmp = tmp->next;
//    }
//    insert(9,tmp);
//    printList(l);
//    Node *x = findPrevious(3,l);
//    cout<<x->Element<<endl;
//    Delete(4,l);
//    printList(l);
//    Node *x = find(1,l);
//    cout<<x->Element<<endl;
//    deleteList(l);
//    printList(l);
    makeEmpty(l);
    printList(l);
}