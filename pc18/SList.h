#pragma once
#include "SLNode.h"
#include <string>
using namespace std;

class SList {
    private:
        SLNode* head;
        unsigned int size;
    public:
        SList();
        ~SList();
        void insertHead (int newHead);
        void removeHead ();
        void clear ();
        unsigned int getSize () const;
        string toString () const;
};