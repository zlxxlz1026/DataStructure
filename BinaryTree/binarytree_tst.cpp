//
// Created by zhulixi on 2020/5/27.
//

#include "binarytree.h"


int main()
{
    vector<int> v{1,2,3,4,5,6,7};
    BinaryTreeNode *root = buildTree(v);
    preOrder(root);
    cout<<endl;
    preOrder_1(root);
    cout<<endl;
    midOrder(root);
    cout<<endl;
    midOrder_1(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    postOrder_1(root);
    cout<<endl;
    levelOrder(root);
    cout<<endl;
}