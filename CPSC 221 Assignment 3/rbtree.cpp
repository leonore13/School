//
//  rbtree.cpp
//  CPSC 221 Assignment 3
//
//  Created by Sophia Nguyen on 2016-06-07.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#ifdef _RBTREE_H_

// default constructor
template <typename T>
RBTree<T>::RBTree() {
    root = NULL;
    size = 0;
}

// copy constructor, performs deep copy of parameter
template <typename T>
RBTree<T>::RBTree(const RBTree<T>& rbtree){
    root = NULL;
    size = 0;
    //still to do..
}

// destructor
template <typename T>
RBTree<T>::~RBTree(){
    //TO-DO
}

// overloaded assignment operator
template <typename T>
RBTree<T>& RBTree<T>::operator=(const RBTree<T>& rbtree){
    return *this;
}

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
    RemoveAll(root);
}

// recursive helper function for tree deletion
// deallocates nodes in post-order
template <typename T>
void RBTree<T>::RemoveAll(Node<T>* node){
    if(node != NULL){
        RemoveAll(node->left);
        RemoveAll(node->right);
        delete node;
        node = NULL;
        size--;
    }
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
bool RBTree<T>::Insert(T item){
    if(Contains(item)){
        return false;
    }
    else{
        BSTInsert(item);
        Node<T>* newItem = Find(item);
        newItem->is_black = false;
        while(newItem != root && newItem->p->is_black == false){
            if(newItem->p->p!= NULL && newItem->p == newItem->p->p->left){
                Node<T> * uncle = newItem->p->p->right;
                if(uncle !=NULL && uncle->is_black == false){
                    newItem->p->is_black = true;
                    uncle->is_black = true;
                    newItem->p->p->is_black = false;
                    newItem = newItem->p->p;
                }
                else{
                    if(newItem == newItem->p->right){
                        newItem = newItem->p;
                        RotateLeft(newItem);
                        newItem->p->is_black = false;
                        RotateRight(newItem->p->p);
                    }
                    else{
                        if(newItem == newItem->p->left){
                            newItem->p->is_black = false;
                            RotateRight(newItem->p->p);
                        }
                    }
                }
                
            }
            else{
                if(newItem->p->p != NULL && newItem->p == newItem->p->p->right){
                    Node<T>* uncleLeft = newItem->p->p->left;
                    if(uncleLeft != NULL && uncleLeft->is_black == false){
                        newItem->p->is_black = true;
                        uncleLeft->is_black = true;
                        newItem->p->p->is_black = false;
                        newItem = newItem->p->p;
                    }
                    // if (uncleLeft == NULL){
                    // newItem->p->is_black = true;
                    // newItem->p->p->is_black = false;
                    // RotateLeft(newItem->p->p);
                    //
                    //}
                    else{
                        if(newItem == newItem->p->left){
                            newItem = newItem->p;
                            RotateRight(newItem);
                            newItem->p->is_black = true;
                            newItem->p->p->is_black = false;
                            RotateLeft(newItem->p->p);
                        }
                        else{
                            if(newItem == newItem->p->right){
                                newItem->p->is_black = true;
                                newItem->p->p->is_black = false;
                                RotateLeft(newItem->p->p);
                            }
                        }
                    }
                }
                
            }
        }
        root->is_black = true;
        size++;
        return true;
    }
    
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
    return size;
}

// returns the height of the tree, from root to deepest null child. Calls recursive helper function.
// Note that an empty tree should have a height of 0, and a tree with only one node will have a height of 1.

template <typename T>
int RBTree<T>::Height() const{
    return HeightHelper(root);
}

template <typename T>
int HeightHelper (Node<T>* root){
    if(root == NULL){
        return -1;
    }
    else {
        return 1 + std::max (HeightHelper(root->left), HeightHelper(root->right));
    }
}




#endif
