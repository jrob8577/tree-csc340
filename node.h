#ifndef __NODE_H__
#define __NODE_H__

#include <stddef.h>

class Node {
  public:
    Node();
    Node( int );
    ~Node();

    int value;
    Node * left;
    Node * right;
};

#endif