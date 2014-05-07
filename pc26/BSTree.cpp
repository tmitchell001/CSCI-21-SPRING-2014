#include "BSTree.h"

BSTree::BSTree()
: root(NULL), size(0) {
}
    
BSTree::~BSTree() {
clear();
size = 0;
}
   
bool BSTree::insert(int data) {
    return pInsert(data, root);
}

void BSTree::clear() {
    pClear(root);
}

unsigned int BSTree::getSize() const {
    return size;
}

void BSTree::inOrder() {
    pInOrder(root);
}

bool BSTree::pInsert(int data, BSTNode*& newNode) {
    if (newNode == NULL) {
        newNode = new BSTNode(data);
        size++;
        return true;
    }
    else if (data < newNode -> getContents()) {
        return pInsert(data, newNode -> getLeftChild());
    }
    else if (data > newNode -> getContents()) {
        return pInsert(data, newNode -> getRightChild());
    }
    else
        return false;
}

void BSTree::pClear(BSTNode*& troot) {
    if (troot != NULL) {
        pClear(troot -> getLeftChild());
        pClear(troot -> getRightChild());
        delete troot;
        size--;
        troot = NULL;
    }
}

void BSTree::pInOrder(BSTNode* troot) {
    if (troot != NULL) {
        pInOrder(troot -> getLeftChild());
        cout << troot -> getContents() << " ";
        pInOrder(troot -> getRightChild());
    }
}