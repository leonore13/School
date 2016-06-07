//
//  rbtree.cpp
//  CPSC 221 Assignment 3
//
//  Created by Sophia Nguyen on 2016-06-07.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#ifdef _RBTREE_H_

// recursive helper function for deep copy
// creates a new node based on sourcenode's contents, links back to parentnode,
//   and recurses to create left and right children
template <typename T>
Node<T>* RBTree<T>::CopyTree(Node<T>* sourcenode, Node<T>* parentnode) {
  //TO-DO
}

// deletes all nodes in the tree. Calls recursive helper function.
template <typename T>
void RBTree<T>::RemoveAll() {
    //TO-DO
}

// Tree fix, performed after removal of a black node
// Note that the parameter x may be NULL
template <typename T>
void RBTree<T>::RBRemoveFixUp(Node<T>* w, Node<T>* xparent, bool xisleftchild) {
    //TO-DO
}

// Calculates the height of the tree
// Requires a traversal of the tree, O(n)
template <typename T>
int RBTree<T>::ComputeHeight(Node<T>* node) const {
    //TO-DO
}

// Calls BSTInsert and then performs any necessary tree fixing.
// If item already exists, do not insert and return false.
// Otherwise, insert, increment size, and return true.
template <typename T>
bool RBTree<T>::Insert(T item) {
    //TO-DO
    return false;
}

// Removal of an item from the tree.
// Must deallocate deleted node after RBDeleteFixUp returns
template <typename T>
bool RBTree<T>::Remove(T item) {
    //TO-DO
    return false;
}

// returns the number of items in the tree
template <typename T>
int RBTree<T>::Size() const {
    //TO-DO
    return 0;
}

// returns the height of the tree, from root to deepest null child. Calls recursive helper function.
// Note that an empty tree should have a height of 0, and a tree with only one node will have a height of 1.

template <typename T>
int RBTree<T>::Height() const {
    //TO-DO
    return 0;
}


#endif
