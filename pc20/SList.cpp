#include "SLNode.h"
#include "SList.h"

SList::SList() {
    head = NULL;
    size = 0;
}


SList::~SList() {
    clear();
}

void SList::insertHead (int newHead) {
    SLNode* front = new SLNode(newHead);
    front->setNextNode(head);
    head = front;
    size++;
}

void SList::removeHead () {
    SLNode* hold;
    hold = head;
    head = head -> getNextNode();
    delete hold;
    size--;
}

void SList::insertTail (int newTail) {
    SLNode* temp = new SLNode(newTail);
    if (head == NULL) {
        insertHead(newTail);
    }
    else {
    SLNode* i = head;
    while (i->getNextNode() != NULL) {
        i = i->getNextNode();
    }
    i->setNextNode(temp);
    size++;
    }
}

void SList::removeTail () {
    if (head != NULL) {
        SLNode* i = head;
        SLNode* trailer = NULL;
    while (i -> getNextNode() != NULL) {
        trailer = i;
        i = i -> getNextNode();
    }
    delete i;
    size--;
    if (i == trailer) {
        delete i;
        head = NULL;
    }
    if (trailer == NULL)
        head = NULL;
    }
    }
    
void insert(int newData) {
    SLNode newNode(newData);
    if (head == NULL)
        insertHead(newData);
    else if (head -> getNextNode() == NULL) {
        if (head.getContents() > newData)
            insertHead(newData);
        else
            insertTail(newData);
    }
    else {
        if (data < head -> getContent())
            insertHead(newData);
        else {
            SLNode* Trailer = NULL;
            SLNode* spot = head;
            spot -> getNextNode() = NULL;
            while (spot -> getNextNode() != NULL && newData > newData -> getContents())
                trailer = spot;
                spot = spot -> getNextNode();
            if (data > spot -> getContents && newData -> getContents())
                insertTail(newData);
            else {
                newNode -> setNextNode(spot);
                trailer -> setNextNode(newNode);
                size++
            }
        }
    }
}

bool removeFirst(int target) {
    if (head == NULL)
        return false;
    else {
        SLNode* trailer = NULL;
        SLNode* spot = head;
        while (spot != NULL && spot -> getContents() != target) {
            trailer = spot;
            spot = spot -> getNextNode();
        }
    if (spot == NULL)
        return false;
    else {
        trailer -> setNextNode(spot -> getNextNode());
        delete spot;
        size--;
        return true;
    }
    }
}

void SList::clear () {
    while (head != NULL)
        removeHead();
}

unsigned int SList::getSize () const {
    return size;
}

string SList::toString () const {
    stringstream ss;
    for (unsigned int i = 0; i != size; i++) {
        ss << head << ",";
    }
    ss << ";";
    string list = ss.str();
    return list;
}
