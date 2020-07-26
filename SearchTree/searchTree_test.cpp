//
// Created by zhulixi on 2020/7/26.
//

#include "searchTree.h"

int main()
{
    SearchTree tree = new TreeNode(45);
    insertNode(24,tree);
    insertNode(53,tree);
    insertNode(12,tree);
    insertNode(37,tree);
    insertNode(93,tree);
    insertNode(36,tree);
    insertNode(38,tree);
    levelOrder(tree);
    Position tmp = Find(24,tree);
    cout<<tmp->rchild->element<<endl;
    tmp =  FindMax(tree);
    cout<<tmp->element<<endl;
    tmp = FindMin(tree);
    cout<<tmp->element<<endl;
    deleteNode(24,tree);
    levelOrder(tree);
}