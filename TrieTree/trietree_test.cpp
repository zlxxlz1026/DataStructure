//
// Created by zhulixi on 2020/7/9.
//

#include "trietree.h"
using namespace std;

int main()
{
    vector<string> v = {"hello","world","zlx"};
    Trie* trie = new Trie();
    for(string& s:v){
        trie->insert(s);
    }
    cout<<trie->search("hello")<<endl;
    cout<<trie->startsWith("zl")<<endl;
}