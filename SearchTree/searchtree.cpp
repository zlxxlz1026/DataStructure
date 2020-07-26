//
// Created by zhulixi on 2020/7/26.
//

#include "searchTree.h"

//使用尾递归查找
Position Find(ElementType x,SearchTree tree){
    if(tree== nullptr) return nullptr;
    if(tree->element==x) return tree;
    else if(tree->element>x) return Find(x,tree->lchild);
    else return Find(x,tree->rchild);
}

Position FindMin(SearchTree tree){
    if(tree== nullptr) return nullptr;
    while(tree->lchild!= nullptr){
        tree = tree->lchild;
    }
    return tree;
}

Position FindMax(SearchTree tree){
    if(tree== nullptr) return nullptr;
    while(tree->rchild!= nullptr){
        tree = tree->rchild;
    }
    return tree;
}
//BST的递归插入
SearchTree insertNode(ElementType x,SearchTree tree){
    if(tree== nullptr){
        tree = new TreeNode(x);
        return tree;
    }
    else if(x<tree->element){
        tree->lchild = insertNode(x,tree->lchild);
    }
    else if(x>tree->element){
        tree->rchild = insertNode(x,tree->rchild);
    }
    return tree;
}
//递归删除
SearchTree deleteNode(ElementType x,SearchTree tree){
    if(tree== nullptr){
        cout<<"cant find the tree"<<endl;
        return nullptr;
    }
    if(x<tree->element) tree->lchild = deleteNode(x,tree->lchild);
    else if(x>tree->element) tree->rchild = deleteNode(x,tree->rchild);
    else{
        if(tree->rchild&&tree->lchild){
            //有两个孩子的话可以选择左子树的最大值或者右子树的最小值，这里找右子树的最小值
            SearchTree tmp = FindMin(tree->rchild);
            tree->element = tmp->element;
            tree->rchild = deleteNode(tree->element,tree->rchild);
        }
        else{
            SearchTree tmp = tree;
            if(tree->lchild == nullptr) {
                tree = tree->rchild;
            }
            else if(tree->rchild == nullptr){
                tree = tree->lchild;
            }
            delete tmp;
        }
    }
    return tree;
}

void levelOrder(SearchTree tree){
    if(tree==nullptr){
        cout<<"the tree not exist"<<endl;
    }
    queue<SearchTree> q;
    q.push(tree);
    while(!q.empty()){
        SearchTree tmp = q.front();
        q.pop();
        cout<<tmp->element<<" ";
        if(tmp->lchild) q.push(tmp->lchild);
        if(tmp->rchild) q.push(tmp->rchild);
    }
    cout<<endl;
}