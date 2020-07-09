//
// Created by zhulixi on 2020/7/9.
//

#include "trietree.h"
using namespace std;

void Trie::insert(std::string word) {
    Trie* node = this;
    for(char c:word){
        if(node->next[c-'a']== nullptr){
            node->next[c-'a'] = new Trie();
        }
        node = node->next[c-'a'];
    }
    node->isEnd = true;
}

bool Trie::search(std::string word) {
    Trie* node = this;
    for(char c:word){
        node = node->next[c-'a'];
        if(node == nullptr)
            return false;
    }
    return node->isEnd;
}

bool Trie::startsWith(std::string prefix) {
    Trie* node = this;
    for(char c:prefix){
        node = node->next[c-'a'];
        if(node == nullptr)
            return false;
    }
    return true;
}