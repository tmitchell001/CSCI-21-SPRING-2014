#include <iostream>
#include <sstream>
#include "BSTNode.h"

using namespace std;

class BSTree {
    public:
        BSTree();
        ~BSTree();
        bool insert(int data);
        void clear();
        unsigned int getSize() const;
        void inOrder();
        
    private:
        BSTNode* root;
        unsigned int size;
        bool pInsert(int data, BSTNode*& newNode);
        void pClear(BSTNode*& troot);
        void pInOrder(BSTNode* troot);
};