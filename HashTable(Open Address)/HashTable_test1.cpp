//
// Created by zhulixi on 2020/7/24.
//

#include "HashTbaleOpenAdd.h"

int main()
{
    HashTable T =initHashTable(10);
    Element x1 = new element(12,1);
    Element x2 = new element(13,2);
    Element x3 = new element(12,3);
    Element x4 = new element(14,4);
    insert(x1,T);
    insert(x2,T);
    insert(x3,T);
    insert(x4,T);
    deleteKey(13,T);
    printHashTable(T);
}
