//
// Created by zhulixi on 2020/5/23.
//

#include "list.h"
#include<bits/stdc++.h>
using namespace std;

int isEmpty(List L){
    return L->next== nullptr;
}

int isLast(Position P){
    return P->next== nullptr;
}

Position find(ElementType x,List L){
    if(L== nullptr) return nullptr;
    Position P = L->next;
    while(P!= nullptr&&P->Element!=x){
        P = P->next;
    }
    return P;
}

void Delete(ElementType x,List L){
    Position P = findPrevious(x,L);
    if(!isLast(P)){
        Position tmp = P->next;
        P->next = tmp->next;
        delete tmp;
    }
}

Position findPrevious(ElementType x,List L){
    Position P = L->next;
    while(P->next!= nullptr&&P->next->Element!=x){
        P=P->next;
    }
    return P;
}

void insert(ElementType x,Position P){
    Position tmp;
    Node *node = new Node;
    if(node== nullptr)
        cout<<"Not enough space"<<endl;
    node->Element = x;
    node->next = P->next;
    P->next = node;
}

void deleteList(List L){
    Position P = L->next;
    Position tmp;
    L->next = nullptr;
    while(P!= nullptr){
        tmp = P->next;
        delete P;
        P = tmp;
    }
}

List makeEmpty(List L){
    if(L== nullptr)
        return L;
    List tmp;
    while(L->next!= nullptr){
        tmp = L->next;
        L->next = L->next->next;
        delete(tmp);
    }
    return nullptr;
}

List createList(vector<int>& v){
    List header = new Node;
    List res = header;
    for(int i=0;i<v.size();++i){
        Node *node =new Node;
        node->Element = v[i];
        header->next = node;
        header = header->next;
    }
    return res;
}

void printList(List L){
    List tmp = L->next;
    while(tmp!= nullptr){
        cout<<tmp->Element<<" ";
        tmp =tmp->next;
    }
    cout<<endl;
}