#include <iostream>
using namespace std;

#include "tree.h"

int main() {
  Tree tree;

  tree.insert( 10 );
  tree.insert( 5 );
  tree.insert( 15 );

  cout << "Size is: " << tree.size() << endl;
  cout << "Height is: " << tree.height() << endl;
  cout << "Searching for 5... " <<
    ( tree.search( 5 ) ? "Found" : "Not found"  ) << endl;
  cout << "Searching for 1... " <<
    ( tree.search( 1 ) ? "Found" : "Not found" ) << endl;

  return 0;
}