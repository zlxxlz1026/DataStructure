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
    return P->next==nullptr;
}

Position find(ElementType x,List L){
    if(L== nullptr){
        cout<<"List not exist"<<endl;
        return nullptr;
    }
    Position tmp = L->next;
    while(tmp!= nullptr&&tmp->key!=x){
        tmp = tmp->next;
    }
    return tmp;
}

Position findPrevious(ElementType x,List L){
    Position tmp = L;
    while(tmp->next!= nullptr&&tmp->next->key!=x){
        tmp = tmp->next;
    }
    return tmp;
}

void insert(ElementType x,Position P){
    auto tmp = new struct Node;
    tmp->next = P->next;
    tmp->key = x;
    P->next = tmp;
}

void Delete(ElementType x,List L){
    Position p = findPrevious(x,L);
    //表示没有找到要删除的元素
    if(!isLast(p)){
        Position tmp = p->next;
        p->next = tmp->next;
        delete tmp;
    }
}

void deleteList(List L){
    Position p = L->next;
    while(p!= nullptr){
        Position tmp = p->next;
        delete p;
        p = tmp;
    }
    L->next = nullptr;//如果不加这个L指向的还是原地址，内容随机
}

List reverse(List L){
    Position pre = L->next;
    Position cur = pre->next;
    pre->next = nullptr;
    while(cur!= nullptr){
        Position tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    Position P = new struct Node;
    P->next = pre;
    return P;
}

List createList(vector<int>& v){
    List L = new struct Node;
    List res = L;
    for(int i=0;i<v.size();++i){
        Position tmp = new struct Node;
        tmp->key = v[i];
        L->next = tmp;
        L = L->next;
    }
    return res;
}

void printList(List L){
    Position p = L->next;
    while(p!=nullptr){
        if(p->next!= nullptr) {
            cout << p->key << "->";
        }
        else{
            cout<<p->key;
        }
        p = p->next;
    }
    cout<<endl;
}