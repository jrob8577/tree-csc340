#include "tree.h"

Tree::Tree() {
  root = NULL;
}

Tree::~Tree() {
  if ( root != NULL ) {
    delete root;
  }

  root = NULL;
}

int Tree::height() {
  return height( root );
}

int Tree::height( Node * node ) {
  if ( node == NULL ) {
    return 0;
  } else {
    return 1 + std::max( height( node->left ), height( node->right ));
  }
}

int Tree::size() {
  return size( root );
}

int Tree::size( Node * node ) {
  if ( node == NULL ) {
    return 0;
  } else {
    return 1 + size( node->left ) + size( node->right );
  }
}

void Tree::insert( int value ) {
  if ( root == NULL ) {
    root = new Node( value );
  } else {
    insert( root, value );
  }
}

void Tree::insert( Node * node, int value ) {
  if ( value < node->value ) {
    if( node->left == NULL ) {
      node->left = new Node( value );
    } else {
      insert( node->left, value );
    }
  } else {
    if( node->right == NULL ) {
      node->right = new Node( value );
    } else {
      insert( node->right, value );
    }
  }
}

bool Tree::search( int value ) {
  return search( root, value );
}

bool Tree::search( Node * node, int value ) {
  if ( node == NULL ) {
    return false;
  }

  if( node->value == value ) {
    return true;
  } else if( value < node->value ) {
    return search( node->left, value );
  } else {
    return search( node->right, value );
  }
}

void Tree::preorder_traversal() {
  preorder_traversal( root );
  cout << endl;
}

void Tree::inorder_traversal() {
  inorder_traversal( root );
  cout << endl;
}

void Tree::postorder_traversal() {
  postorder_traversal( root );
  cout << endl;
}

void Tree::preorder_traversal( Node * node ) {
  if( node != NULL ) {
    cout << node->value << " ";
    preorder_traversal( node->left );
    preorder_traversal( node->right );
  }
}

void Tree::inorder_traversal( Node * node ) {
  if( node != NULL ) {
    inorder_traversal( node->left );
    cout << node->value << " ";
    inorder_traversal( node->right );
  }
}

void Tree::postorder_traversal( Node * node ) {
  if( node != NULL ) {
    postorder_traversal( node->left );
    postorder_traversal( node->right );
    cout << node->value << " ";
  }
}


