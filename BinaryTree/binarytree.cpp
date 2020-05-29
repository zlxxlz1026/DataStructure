//
// Created by zhulixi on 2020/5/27.
//

#include "binarytree.h"

void preOrder(BinaryTreeNode *root){
    if(root== nullptr)
        return;
    cout<<root->val<<" ";
    preOrder(root->lchild);
    preOrder(root->rchild);
}

void preOrder_1(BinaryTreeNode *root){
    if(root== nullptr)
        return;
    stack<BinaryTreeNode*> mystack;
    while(root!= nullptr||!mystack.empty()){
        while(root!= nullptr){
            cout<<root->val<<" ";
            mystack.push(root);
            root=root->lchild;
        }
        if(!mystack.empty()){
            root = mystack.top();
            mystack.pop();
            root = root->rchild;
        }
    }
}

void midOrder(BinaryTreeNode *root){
    if(root== nullptr)
        return;
    midOrder(root->lchild);
    cout<<root->val<<" ";
    midOrder(root->rchild);
}

void midOrder_1(BinaryTreeNode *root){
    if(root== nullptr)
        return;
    stack<BinaryTreeNode*>mystack;
    while(root!= nullptr||!mystack.empty()){
        while(root!= nullptr){
            mystack.push(root);
            root = root->lchild;
        }
        if(!mystack.empty()){
            root = mystack.top();
            mystack.pop();
            cout<<root->val<<" ";
            root = root->rchild;
        }
    }
}

void postOrder(BinaryTreeNode *root){
    if(root== nullptr)
        return;
    postOrder(root->lchild);
    postOrder(root->rchild);
    cout<<root->val<<" ";
}

void postOrder_1(BinaryTreeNode *root){
    if(root== nullptr)
        return;
    stack<BinaryTreeNode*>mystack;
    BinaryTreeNode*pre = nullptr;
    BinaryTreeNode*cur = nullptr;
    mystack.push(root);
    while(!mystack.empty()){
        cur = mystack.top();
        if((cur->lchild== nullptr&&cur->rchild== nullptr)||(pre!= nullptr&&(pre==cur->lchild||pre==cur->rchild))){
            cout<<cur->val<<" ";
            mystack.pop();
            pre=cur;
        }
        else{
            if(cur->rchild)
                mystack.push(cur->rchild);
            if(cur->lchild)
                mystack.push(cur->lchild);
        }
    }
}

void levelOrder(BinaryTreeNode *root){
    if(root== nullptr)
        return;
    queue<BinaryTreeNode*> myqueue;
    myqueue.push(root);
    while(!myqueue.empty()){
        BinaryTreeNode *tmp = myqueue.front();
        myqueue.pop();
        cout<<tmp->val<<" ";
        if(tmp->lchild)
            myqueue.push(tmp->lchild);
        if(tmp->rchild)
            myqueue.push(tmp->rchild);
    }
}

BinaryTreeNode *buildTree(vector<int>& v){
    BinaryTreeNode *root = new BinaryTreeNode(-1);
    int index= 0;
    root->val = v[index++];
    queue<BinaryTreeNode*> q;
    q.push(root);
    while(!q.empty()&&(index<v.size())){
        BinaryTreeNode* tmp = q.front();
        q.pop();
        if(v[index]!=0){
            tmp->lchild = new BinaryTreeNode(v[index]);
            q.push(tmp->lchild);
        }
        index++;
        if(v[index]!=0){
            tmp->rchild = new BinaryTreeNode(v[index]);
            q.push(tmp->rchild);
        }
        index++;
    }
    return root;
}