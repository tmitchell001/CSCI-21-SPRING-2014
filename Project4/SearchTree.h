#include <iostream>
#include <sstream>
#include "TreeNode.h"

using namespace std;

template <class T>

class SearchTree {
    public:
        SearchTree()
        : root(NULL), size(0) {
        }
            
        ~SearchTree() {
        clear();
        size = 0;
        }
           
        bool insert(T data) {
            return pInsert(data, root);
        }
        
        SearchTree* getRoot() {
            return root;
        }
        
        void clear() {
            pClear(root);
        }
        
        bool remove(T data) {
            return pRemove(data, root);
        }

        unsigned int getSize() const {
            return size;
        }
        
        void inOrder() {
            pInOrder(root);
        }

    private:
        bool pRemove(T data, TreeNode<T>*& rootPtr) {
            if (rootPtr == NULL) {
                return false;
            }
            else if (data < rootPtr -> getContents()) {
                return pRemove(data, rootPtr -> getLeftChild());
            }
            else if (data > rootPtr -> getContents()) {
                return pRemove(data, rootPtr -> getRightChild());
            }
            else {
                if (rootPtr -> getLeftChild() == NULL) {
                    TreeNode<T>* oldPtr = rootPtr;
                    rootPtr = rootPtr -> getRightChild();
                    delete oldPtr;
                }
                else
                    pRemoveMax(rootPtr -> getContents(), rootPtr -> getLeftChild());
                    size--;
                    return true;
            }
        }
        
        void pRemoveMax(T& removed, SearchTree*& rootPtr) {
            if (rootPtr -> getRightChild() == NULL) {
                TreeNode<T>* maxNode = rootPtr;
                removed = rootPtr -> getContents();
                rootPtr = rootPtr -> getLeftChild();
                delete maxNode;
            }
            else
                pRemoveMax(removed, rootPtr -> getRightChild());
        }

        bool pInsert(T data, SearchTree*& newNode) {
            if (newNode == NULL) {
                newNode = new TreeNode<T>(data);
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
        
        void pClear(SearchTree*& troot) {
            if (troot != NULL) {
                if (troot.getLeftChild() != NULL) {
                pClear(troot -> getLeftChild());
                }
                if (troot.getRightChild() != NULL) {
                    pClear(troot -> getRightChild());
                }
                delete troot;
                size--;
                troot = NULL;
            }
        }
        
        void pInOrder(SearchTree* troot) {
            if (troot != NULL) {
                pInOrder(troot -> getLeftChild());
                cout << troot -> getContents() << " ";
                pInOrder(troot -> getRightChild());
            }
        }

        SearchTree* root;
        unsigned int size;
};