//
// Created by zhulixi on 2020/5/28.
//

#include "searchtree.h"

int main()
{
    SearchTree tree;
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for(auto i:v)
        tree.insertSearchTree(i);
    tree.levelOrder();
    tree.deleteSearchTree(5);
    tree.levelOrder();

}