#include "DLList.h"

DLList::DLList() 
: size(0), head (NULL), tail(NULL)
{
}

DLList::~DLList() {
    //clear();
}

unsigned int DLList::getSize() {
    return size;
}

void DLList::pushFront(DLNode newContents) {
    if (head == NULL) {
        head = new DLNode(newContents);
        size++;
    }
    else if (head) {
        DLNode* aNewNode = new DLNode(newContents);
        aNewNode->setNext(head);
        head = aNewNode;
        size++;
    }
}

void DLList::pushBack(DLNode newContents) {
    if (tail == NULL) {
        tail = new DLNode(newContents);
        size--;
    }
    else if(tail) {
        DLNode* aNewNode = new DLNode(newContents);
        aNewNode->setNext(tail);
        tail = aNewNode;
        size--;
    }
}

void DLList::insert (int newContents) {
    DLNode* newNode = new DLNode(newContents);
    if (head == NULL)
        DLNode(newContents);
    else if (head -> getNext() == NULL) {
        if ((*head).getContents() > newContents)
            pushFront(newContents);
        else
            pushBack(newContents);
    }
    else {
        if (newContents <= head -> getContents())
            pushFront(newContents);
        else {
            DLNode* trailer = NULL;
            DLNode* spot = head;
            while (spot -> getNext() != NULL && newContents > spot -> getContents()) {
                trailer = spot;
                spot = spot -> getNext();
            }
            if (newContents > spot -> getContents() && spot -> getNext() == NULL)
                pushBack(newContents);
            else {
                newNode -> setNext(spot);
                trailer -> setNext(newNode);
                size++;
            }
        }
    }
}

int DLList::getFront () const {
    return head -> getContents();
}

int DLList::getBack () const {
    return tail -> getContents();
}

bool DLList::get (int target) const {
    DLNode* spot = head;
    DLNode* trailer = NULL;
    while (spot != NULL) {
        trailer = spot;
        if (trailer -> getContents() == target) {
            return true;
        }
    }
            return false;
}

void DLList::popFront() {
    if (head != NULL) {
        DLNode* oldHead = head;
        head = oldHead -> getNext();
        delete oldHead;
        size--; 
    }
}

void DLList::popBack() {
    if (tail != NULL) {
        DLNode* oldTail = tail;
        tail = tail -> getPrevious();
        delete oldTail;
        size--;
    }
}

bool DLList::removeFirst(int target) {
    if (head == NULL)
        return false;
    else {
        DLNode* trailer = NULL;
        DLNode* spot = head;
        while (spot != NULL && spot -> getContents() != target) {
            trailer = spot;
            spot = spot -> getNext();
        }
        if (spot == NULL)
            return false;
        else if (trailer == NULL) {
            popFront();
            return true;
        }
        else {
            trailer -> setNext(spot -> getNext());
            delete spot;
            size--;
            return true;
        }
    }
}

bool DLList::removeAll (int target) {
    bool removeOne = removeFirst(target);
    while (removeFirst(target) == true);
    return removeOne;
}

void DLList::clear () {
    while (head != NULL)
    popFront();
}

ostream& operator<< (ostream& out, const DLList& src) {
    for (DLNode* i = src.head; i != NULL; i = i-> getNext()) {
        out << i -> getContents();
        if (i -> getNext() != NULL) {
            out << ",";
        }
    }
    return out;
}