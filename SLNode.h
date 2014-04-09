#pragma once
#include <iostream>
#include <string>
using namespace std;

class SLNode {
    
    public:
        SLNode()
         : SLNode* next(NULL),int data(0)
        {
        }
        
        SLNode::SLNode(int newData)
        : next(NULL), data(newData)
        {
        }
        
        int getContents();
        SLNode* getNextNode();
        void setNextNode(SLNode* newNext);
        void setContents(int newData);
        
    private:
        int data;
        SLNode* next;
    
}