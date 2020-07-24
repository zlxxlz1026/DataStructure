//
// Created by zhulixi on 2020/7/24.
//

#ifndef DATA_STRUCTURE_HASHTBALEOPENADD_H
#define DATA_STRUCTURE_HASHTBALEOPENADD_H
#include<bits/stdc++.h>
using namespace std;

struct element;
struct table;
typedef struct element* Element;
typedef struct table* HashTable;
typedef int ElementType;

//使用平方取中
int Hash(ElementType key,int tablesize);
HashTable initHashTable(int size);
int findKey(ElementType key,HashTable T);
void insert(Element X,HashTable T);
void deleteKey(ElementType key,HashTable T);
void printHashTable(HashTable T);

struct element{
    ElementType key;
    int data;
    element(){
        key = -1;
        data = 0;
    }
    element(ElementType key,int data):key(key),data(data){}
};

struct table{
    Element* arr;
    int count;
    int size;
    table(){
        count = 0;
        size = 0;
    }
};
#endif //DATA_STRUCTURE_HASHTBALEOPENADD_H
