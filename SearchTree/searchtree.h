//
// Created by zhulixi on 2020/7/26.
//

#ifndef DATA_STRUCTURE_SEARCHTREE_H
#define DATA_STRUCTURE_SEARCHTREE_H
#include<bits/stdc++.h>
using namespace std;

struct TreeNode;
typedef int ElementType;
typedef struct TreeNode* Position;
typedef struct TreeNode* SearchTree;

Position Find(ElementType x,SearchTree tree);
Position FindMin(SearchTree tree);
Position FindMax(SearchTree tree);
SearchTree insertNode(ElementType x,SearchTree tree);
SearchTree deleteNode(ElementType x,SearchTree tree);
void levelOrder(SearchTree tree);

struct TreeNode{
    ElementType element;
    TreeNode* lchild;
    TreeNode* rchild;
    TreeNode():element(-1),lchild(nullptr),rchild(nullptr){}
    TreeNode(ElementType x):element(x),lchild(nullptr),rchild(nullptr){}
};

#endif //DATA_STRUCTURE_SEARCHTREE_H
