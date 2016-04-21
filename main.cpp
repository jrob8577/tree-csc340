#include <iostream>
using namespace std;

#include "tree.h"

int main() {
  Tree tree;

  tree.insert( 10 );
  tree.insert( 5 );
  tree.insert( 15 );
  tree.insert( 11 );
  tree.insert( 51 );
  tree.insert( 13 );
  tree.insert( 1 );
  tree.insert( 8 );
  tree.insert( 1000 );

  cout << "Size is: " << tree.size() << endl;
  cout << "Height is: " << tree.height() << endl;
  cout << "Searching for 5... " <<
    ( tree.search( 5 ) ? "Found" : "Not found"  ) << endl;
  cout << "Searching for 1... " <<
    ( tree.search( 1 ) ? "Found" : "Not found" ) << endl;

  cout << "Preorder: " << endl;
  tree.preorder_traversal();

  cout << "Inorder: " << endl;
  tree.inorder_traversal();

  cout << "Postorder: " << endl;
  tree.postorder_traversal();

  return 0;
}