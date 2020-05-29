//
// Created by zhulixi on 2020/5/27.
//

#ifndef DATASTRUCTURE_BINARYTREE_H
#define DATASTRUCTURE_BINARYTREE_H
#include<bits/stdc++.h>
using namespace std;

struct BinaryTreeNode{
    int val;
    BinaryTreeNode *lchild;
    BinaryTreeNode *rchild;
    BinaryTreeNode(int x):val(x),lchild(nullptr),rchild(nullptr){}
};

void preOrder(BinaryTreeNode *root);
void preOrder_1(BinaryTreeNode *root);
void midOrder(BinaryTreeNode *root);
void midOrder_1(BinaryTreeNode *root);
void postOrder(BinaryTreeNode *root);
void postOrder_1(BinaryTreeNode *root);
void levelOrder(BinaryTreeNode *root);
BinaryTreeNode *buildTree(vector<int>& v);

#endif //DATASTRUCTURE_BINARYTREE_H
