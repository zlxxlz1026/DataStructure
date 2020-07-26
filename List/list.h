//
// Created by zhulixi on 2020/5/23.
//

#ifndef DATASTRUCTURE_LIST_H
#define DATASTRUCTURE_LIST_H
#include<bits/stdc++.h>
using namespace std;

struct Node;
typedef struct Node* List;
typedef List Position;
typedef int ElementType;

int isEmpty(List L);
int isLast(Position P);
Position find(ElementType x,List L);
Position findPrevious(ElementType x,List L);
void insert(ElementType x,Position P);
void Delete(ElementType x,List L);
List createList(vector<int>& v);
void printList(List L);
void deleteList(List L);
List reverse(List L);
struct Node{
    ElementType Element;
    List next;
    Node(){
        Element = -1;
        next = nullptr;
    }
    Node(ElementType x):Element(x){}
};

#endif //DATASTRUCTURE_LIST_H
