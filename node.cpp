#include "node.h"

Node::Node() {
  value = 0;
  left = right = NULL;
}

Node::Node( int v ) {
  value = v;
  left = right = NULL;
}

Node::~Node() {
  if ( left != NULL ) {
    delete left;
  }

  if ( right != NULL ) {
    delete right;
  }

  left = right = NULL;
}