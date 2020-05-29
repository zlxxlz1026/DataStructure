//
// Created by zhulixi on 2020/5/27.
//
//模板不支持分离编译
#ifndef DATASTRUCTURE_QUEUE_H
#define DATASTRUCTURE_QUEUE_H
#include<iostream>
using namespace std;

template<typename T,int size=0>
class Queue{
public:
    Queue();
    bool isEmpty() const;
    bool isFull() const;
    void enqueue(const T&);
    T dequeue();
    void print() const;
private:
    T storge[size];
    int first;
    int last;
    int cnt;
};
template<typename T,int size>
Queue<T,size>::Queue()
{
    first = last = -1;
    cnt = 0;
}
template<typename T,int size>
bool Queue<T,size>::isEmpty() const {
    return cnt == 0;
}

template<typename T,int size>
bool Queue<T,size>::isFull() const {
    return cnt==size;
}

template<typename T,int size>
void Queue<T,size>::enqueue(const T &Element) {
    if(!isFull()){
        if(last==-1||last==size-1){
            storge[0] = Element;
            last = 0;
            if(first==-1)
                first=0;
        }
        else{
            storge[++last]=Element;
        }
        ++cnt;
    }
    else{
        cout<<"Queue has full."<<endl;
        exit(EXIT_FAILURE);
    }
}

template <typename T,int size>
T Queue<T,size>::dequeue() {
    if(isEmpty()){
        cout<<"Queue Empty."<<endl;
        exit(EXIT_FAILURE);
    }
    T tmp = storge[first];
    if(first==last){
        last = first = -1;
    }
    else if(first==size-1){
        first=0;
    }
    else{
        first++;
    }
    --cnt;
    return tmp;
}

template <typename T,int size>
void Queue<T,size>::print() const {
    for(auto i=0;i<cnt;++i){
        cout<<storge[(first+i)%size]<<" ";
    }
    cout<<endl;
}
#endif //DATASTRUCTURE_QUEUE_H
