//
// Created by zhulixi on 2020/5/23.
//

#ifndef DATASTRUCTURE_LIST_H
#define DATASTRUCTURE_LIST_H
#include<bits/stdc++.h>
using namespace std;
struct Node;
typedef int ElementType;
typedef struct Node *PtrNode;
typedef PtrNode List;
typedef PtrNode Position;

List makeEmpty(List L);
int isEmpty(List L);
int isLast(List L);
Position find(ElementType x,List L);
void Delete(ElementType x,List L);
Position findPrevious(ElementType x,List L);
void insert(ElementType x,Position P);
void deleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(List L);
ElementType retrieve(Position P);
List createList(vector<int>&);
void printList(List L);

struct Node{
    ElementType Element=-1;
    struct Node *next= nullptr;
};
#endif //DATASTRUCTURE_LIST_H
