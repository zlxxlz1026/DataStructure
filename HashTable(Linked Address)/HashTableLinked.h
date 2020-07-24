//
// Created by zhulixi on 2020/7/24.
//

#ifndef DATA_STRUCTURE_HASHTABLELINKED_H
#define DATA_STRUCTURE_HASHTABLELINKED_H
#include "list.h"

struct table;
typedef struct table* HashTable;

int Hash(ElementType key,int tablesize);
HashTable initHashTable(int size);
Position findKey(ElementType key,HashTable T);
//因为list实现了insert函数名虽然丑也只能这样了.
//这里因为没有更改list结构体，只存储了key，如果希望存data更改结构体即可。
void insertKey(ElementType key,HashTable T);
void deleteKey(ElementType key,HashTable T);
void printHashTable(HashTable T);

struct table{
    int size;
    List* TheList;
};

#endif //DATA_STRUCTURE_HASHTABLELINKED_H
