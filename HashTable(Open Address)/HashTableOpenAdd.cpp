//
// Created by zhulixi on 2020/7/24.
//

#include "HashTbaleOpenAdd.h"
//通过/10取倒数2-4位，可以自己设置
int Hash(ElementType key,int tablesize){
//    return ((key*key)/10%1000)%tablesize;
    return ((key)%tablesize);//使用最简单的hash函数来测试
}
//此处一部分初始化加在了sturct构造函数中
HashTable initHashTable(int size){
    HashTable T = new table;
    T->size = size;
    T->arr = new Element[size];
    for(int i=0;i<size;++i){
        T->arr[i] = new element;
    }
    return T;
}
//此处直接给了形参key,也可给elemnt的key都可以,只需要少量更改.
int findKey(ElementType key,HashTable T){
    int pos = Hash(key,T->size);
    while(T->arr[pos]->key!=key){
        pos = Hash(pos+1,T->size);
        if(T->arr[pos]->key==-1||pos==Hash(key,T->size)){
//            cout<<"cant find the key"<<endl;
            return -1;
        }
    }
    return pos;
}
//使用线性探测再散列。这里相同key的处理方式为覆盖旧值
void insert(Element X,HashTable T){
    if(T->count==T->size){
        cout<<"there is no space for the new data"<<endl;
        return;
    }
    int tmp = findKey(X->key,T);
    if(tmp!=-1){
        T->arr[tmp] = X;
        return;
    }
    int pos = Hash(X->key,T->size);
//    cout<<T->arr[pos]->key<<endl;
    int now = pos;
    for(int i=0;T->arr[now]->key!=-1&&i<T->size;++i){
        now = Hash(pos+i,T->size)%T->size;
//        cout<<pos<<endl;
    }
    T->arr[now] = X;
    ++T->count;
}

void deleteKey(ElementType key,HashTable T){
    if(findKey(key,T)==-1){
        cout<<"the key not exist"<<endl;
        return;
    }
    int pos = findKey(key,T);
    T->arr[pos]->key = -1;
    T->arr[pos]->data = 0;
    --T->count;
}

void printHashTable(HashTable T){
    cout<<"the table count is:"<<T->count<<endl;
    for(int i=0;i<T->size;++i){
        cout<<T->arr[i]->key<<" "<<T->arr[i]->data<<endl;
    }
}