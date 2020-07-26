//
// Created by zhulixi on 2020/5/23.
//
#include "list.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    List L = createList(v);
    printList(L);
    List L1 = new struct Node;
//    cout<<isEmpty(L1)<<endl;
    L1->next = new struct Node;
//    cout<<isLast(L1)<<endl;
    Position p = findPrevious(3,L);
//    cout<<p->next->Element<<endl;
    insert(99,p);
    printList(L);
    Delete(5,L);
    printList(L);
//    deleteList(L);
//    printList(L);
    List newL = reverse(L);
    printList(newL);
}