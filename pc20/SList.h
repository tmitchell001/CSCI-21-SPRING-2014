#pragma once
#include "SLNode.h"
#include <string>
#include <sstream>
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
        void insertTail (int newTail);
        void removeTail ();
        void insert(int newData);
        bool removeFirst(int target);
        void clear ();
        unsigned int getSize () const;
        string toString () const;
};