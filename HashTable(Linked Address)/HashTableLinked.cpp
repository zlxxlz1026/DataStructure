//
// Created by zhulixi on 2020/7/24.
//

#include "HashTableLinked.h"

int Hash(ElementType key,int tablesize){
    //    return ((key*key)/10%1000)%tablesize;
    return ((key)%tablesize);//使用最简单的hash函数来测试
}

HashTable initHashTable(int size){
    HashTable T = new table;
    T->size = size;
    T->TheList = new List[size];
    for(int i=0;i<size;++i){
        T->TheList[i] = new Node;
    }
    return T;
}

Position findKey(ElementType key,HashTable T){
    int pos = Hash(key,T->size);
    Position res = find(key,T->TheList[pos]);
    if(res== nullptr){
        cout<<"the key not exist"<<endl;
        return nullptr;
    }
    return res;
}
//根据书上所说，插头或插尾哪个简单就用哪个，这里插到头部（最初初始化了哨兵结点）
void insertKey(ElementType key,HashTable T){
    int pos = Hash(key,T->size);
//    cout<<"here"<<endl;
    List tmp = T->TheList[pos];
    Position P = find(key,tmp);
    if(P== nullptr) {
        Position p = new Node(key);
        p->next = tmp->next;
        tmp->next = p;
    }
    else{
        P->key = key;
    }
}

void deleteKey(ElementType key,HashTable T){
    int pos = Hash(key,T->size);
    List tmp = T->TheList[pos];
    Delete(key,tmp);
}

void printHashTable(HashTable T){
    for(int i=0;i<T->size;++i){
        cout<<i<<":";
        printList(T->TheList[i]);
    }
}