//
// Grader comments 2014.05.12
// Need function documentation in header files. -50 points
// 
#pragma once
#include <iostream>
#include "DLNode.h"
using namespace std;

class DLList{
    public:
        DLList();
        ~DLList();
        unsigned int getSize();
        void pushFront(DLNode target);
        void pushBack(DLNode target);
        void insert (int newContents);
        int getFront () const;
        int getBack () const;
        bool get (int target) const;
        void popFront();
        void popBack();
        bool removeFirst (int target);
        bool removeAll (int target);
        void clear ();
        friend ostream& operator<< (ostream& out, const DLList& src);
    private:
        unsigned int size;
        DLNode* head;
        DLNode* tail;
};