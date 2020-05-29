//
// Created by zhulixi on 2020/5/28.
//

#include "searchtree.h"

SearchTreeNode* SearchTree::search(ElementType x, SearchTreeNode *&p) {
    SearchTreeNode *tmp = root;
    while(tmp){
        p = tmp;
        if(tmp->val==x)
            return p;
        else if(tmp->val>x)
            tmp = tmp->lchild;
        else
            tmp = tmp->rchild;
    }
    return nullptr;
}

void SearchTree::insertSearchTree(ElementType x) {
    SearchTreeNode *p = nullptr,*q = root;
    if(search(x,p)== nullptr){
        SearchTreeNode *tmp = new SearchTreeNode(x);
        if(q== nullptr){
            root=tmp;
            return;
        }
        if(x<p->val)
            p->lchild = tmp;
        else
            p->rchild = tmp;
    }
}

int SearchTree::deleteSearchTree(ElementType x) {
    SearchTreeNode *p,*f,*q,*s;
    p = root,f= nullptr;
    while(p&&p->val!=x){
        f = p;
        if(p->val>x)
            p = p->lchild;
        else
            p = p->rchild;
    }
    if(p== nullptr)
        return 0;
    if(p->lchild== nullptr){
        if(f== nullptr)
            root = p->rchild;
        else if(f->lchild==p)
            f->lchild = p->rchild;
        else
            f->rchild = p->rchild;
        delete p;
    }
    else if(p->rchild== nullptr){
        if(f== nullptr)
            root=p->lchild;
        else if(f->lchild==p)
            f->lchild = p->lchild;
        else
            f->rchild = p->lchild;
        delete p;
    }
    else{
        q = p;
        s = p->lchild;//寻找左子树得最右下结点
        while(s->rchild){
            q = s;
            s = s->rchild;
        }
        if(q==p)
            q->lchild = s->lchild;
        else
            q->rchild = s->lchild;
        p->val = s->val;
        delete s;
    }
    return 1;
}

void SearchTree::levelOrder() {
    if(root== nullptr) return;
    queue<SearchTreeNode*>myqueue;
    myqueue.push(root);
    while(!myqueue.empty()){
        SearchTreeNode* tmp = myqueue.front();
        cout<<tmp->val<<" ";
        myqueue.pop();
        if(tmp->lchild)
            myqueue.push(tmp->lchild);
        if(tmp->rchild)
            myqueue.push(tmp->rchild);
    }
    cout<<endl;
}

bool SearchTree::isEmpty() {
    return root== nullptr;
}