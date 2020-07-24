//
// Created by zhulixi on 2020/7/24.
//

#include "HashTableLinked.h"

int main()
{
    HashTable T = initHashTable(10);
    insertKey(12,T);
    insertKey(22,T);
    insertKey(32,T);
//    deleteKey(22,T);
    printHashTable(T);
//    Position p = findKey(22,T);
//    cout<<p->key<<endl;
}