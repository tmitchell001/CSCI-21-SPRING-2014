#include <iostream>
#include <sstream>

using namespace std;

template <class T>

class TreeNode {
    public:
        TreeNode()
        : leftChild(NULL), rightChild(NULL), contents(0)
        {
        }
        
        TreeNode(T newContents) {
            contents = newContents;
            leftChild = NULL;
            rightChild = NULL;
        }
        
        ~TreeNode() {
            leftChild = NULL;
            rightChild = NULL;
        }
        
        void setCount(unsigned int newCount) {
            count = newCount;
        }
        
        unsigned int getCount() {
            return count;
        }
        
        void setContents(T newContents) {
            contents = newContents;
        }
                
        T getContents() const {
            return contents;
        }
        
        T& getContents() {
            return contents;
        }
        
        void setLeftChild(TreeNode* newLeftChild) {
            leftChild = newLeftChild;
        }
        
        void setRightChild(TreeNode* newRightChild) {
            rightChild = newRightChild;
        }
        
        TreeNode* getLeftChild() const {
            return leftChild;
        }
        
        TreeNode*& getLeftChild() {
            return leftChild;
        }
        
        TreeNode* getRightChild() const {
            return rightChild;
        }
        
        TreeNode*& getRightChild() {
            return rightChild;
        }
        
    private:
        TreeNode* leftChild;
        TreeNode* rightChild;
        T contents;
        unsigned int count;
};