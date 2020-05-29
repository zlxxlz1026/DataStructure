//
// Created by zhulixi on 2020/5/27.
//

#ifndef DATASTRUCTURE_SEARCHTREE_H
#define DATASTRUCTURE_SEARCHTREE_H
#include<bits/stdc++.h>
using namespace std;

typedef int ElementType;
class SearchTree;
class SearchTreeNode{
public:
    ElementType val;
    SearchTreeNode *lchild;
    SearchTreeNode *rchild;
    SearchTreeNode(int x):val(x),lchild(nullptr),rchild(nullptr){}
};
class SearchTree{
public:
    SearchTreeNode *root;
    SearchTree(){
        root= nullptr;
    }
    SearchTree(int x){
        root = new SearchTreeNode(x);
    }
    SearchTreeNode *search(ElementType x,SearchTreeNode *&p);
    void insertSearchTree(ElementType x);
    int deleteSearchTree(ElementType x);
    void levelOrder();
    bool isEmpty();
};
#endif //DATASTRUCTURE_SEARCHTREE_H
