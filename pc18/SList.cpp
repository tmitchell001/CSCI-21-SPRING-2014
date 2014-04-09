#include "SList.h"
#include <sstream>

SList()
: head(NULL), size(0) {
    
}
~SList() {
    clear();
}

void insertHead (int newHead) {
    aNode = SLNode(newHead);
    aNode -> setNext(head);
    head = aNode;
    size++;
}

removeHead() {
    SLNode* temp = head;
    head = head->getNextMode();
    delete temp;
    size--;
}

void clear () {
    while (head != NULL)
        removeHead();
}

unsigned int getSize () const {
    return size;
}

string toString () const {
    stringstream ss;
    for (int i = 0; i != size; i++) {
        ss << head << ","
    }
    ss << ";";
    string list = ss.str();
    return list;
}









//SLList::toString () const {
//stringstream ss;
// 
