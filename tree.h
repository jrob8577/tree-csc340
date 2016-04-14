#ifndef __TREE_H__
#define __TREE_H__

#include <algorithm>

#include "node.h"

class Tree {
  public:
    Tree();
    ~Tree();

    void insert( int );
    int height();
    int size();
    bool search( int );

  private:
    int height( Node * );
    int size( Node * );
    void insert( Node *, int );
    bool search( Node *, int );

    Node * root;
};

#endif