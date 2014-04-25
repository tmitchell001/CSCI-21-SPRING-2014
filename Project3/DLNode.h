#pragma once
#include <iostream>
using namespace std;

class DLNode {
    public:
        DLNode ();
        DLNode (int newContents);
        virtual ~DLNode ();
        void setContents (int newContents);
        void setNext (DLNode* newNext);
        void setPrevious (DLNode* newPrevious);
        int getContents () const;
        DLNode* getNext () const;
        DLNode* getPrevious () const;
    private:
        int contents;
        DLNode* nextNode;
        DLNode* previousNode;
};