//
// Created by zhulixi on 2020/7/9.
//

#ifndef DATASTRUCTURE_TRIETREE_H
#define DATASTRUCTURE_TRIETREE_H
#include<bits/stdc++.h>
class Trie{
private:
    bool isEnd;
    Trie* next[26] = {nullptr};
public:
    Trie(){
        isEnd = false;
    }
    void insert(std::string word);
    bool search(std::string word);
    bool startsWith(std::string prefix);
};
#endif //DATASTRUCTURE_TRIETREE_H
