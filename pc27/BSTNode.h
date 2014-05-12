#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class BSTNode {
    public:
        BSTNode();
        BSTNode(int newContents);
        ~BSTNode();
        void setContents(int newContents);
        int getContents() const;
        int& getContents();
        void setLeftChild(BSTNode* leftChild);
        void setRightChild(BSTNode* rightChild);
        BSTNode* getLeftChild() const;
        BSTNode*& getLeftChild();
        BSTNode* getRightChild() const;
        BSTNode*& getRightChild();
        
    private:
        BSTNode* leftChild;
        BSTNode* rightChild;
        int contents;
};