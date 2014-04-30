#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>

class SLNode {
    
    public:
        SLNode()
            : next(NULL) {
        }
        
        SLNode(T newData) 
            : data(newData), next(NULL)
        {
            
        }
        
        ~SLNode() {
            next = NULL;
        }

        T getContents() {
            return data;   
        }

        SLNode* getNextNode() {
            return next;
        }

        void setNextNode(SLNode* newNext) {
            next = newNext;
        }

        void setContents(T newData) {
            data = newData;
        }

    private:
        T data;
        SLNode* next;
    
};
