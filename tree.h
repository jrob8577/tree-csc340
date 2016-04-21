#ifndef __TREE_H__
#define __TREE_H__

#include <iostream>
#include <algorithm>

using namespace std;

#include "node.h"

class Tree {
  public:
    Tree();
    ~Tree();

    void insert( int );
    int height();
    int size();
    bool search( int );

    void preorder_traversal();
    void inorder_traversal();
    void postorder_traversal();

  private:
    int height( Node * );
    int size( Node * );
    void insert( Node *, int );
    bool search( Node *, int );

    void preorder_traversal( Node * );
    void inorder_traversal( Node * );
    void postorder_traversal( Node * );

    Node * root;
};

#endif