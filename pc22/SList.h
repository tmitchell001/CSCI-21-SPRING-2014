#pragma once
#include "SLNode.h"
#include <string>
#pragma once
#include <sstream>
#include "SLNode.h"
using namespace std;

template <class t>

class SList {
    public:
        SList() 
        : head(NULL), size(0)
        {
        }

        ~SList() {
            clear();
        }

        void insertHead (t newHead) {
            SLNode<t>* front = new SLNode<t>(newHead);
            front->setNextNode(head);
            head = front;
            size++;
        }

        void removeHead () {
            SLNode<t>* hold;
            hold = head;
            head = head -> getNextNode();
            delete hold;
            size--;
        }

        void insertTail (t newTail) {
            SLNode<t>* temp = new SLNode<t>(newTail);
            if (head == NULL) {
                insertHead(newTail);
            }
            else {
            SLNode<t>* i = head;
            while (i->getNextNode() != NULL) {
                i = i->getNextNode();
            }
            i->setNextNode(temp);
            size++;
            }
        }

        void removeTail () {
            if (head != NULL) {
                SLNode<t>* i = head;
                SLNode<t>* trailer = NULL;
            while (i -> getNextNode() != NULL) {
                trailer = i;
                i = i -> getNextNode();
            }
            delete i;
            size--;
            if (i == head) {
                head = NULL;
            }
            else
                trailer -> setNextNode(NULL);
            }
        }

        void insert(t newData) {
            SLNode<t>* newNode = new SLNode<t>(newData);
            if (head == NULL)
                insertHead(newData);
            else if (head -> getNextNode() == NULL) {
                if ((*head).getContents() > newData)
                    insertHead(newData);
                else
                    insertTail(newData);
            }
            else {
                if (newData <= head -> getContents())
                    insertHead(newData);
                else {
                    SLNode<t>* trailer = NULL;
                    SLNode<t>* spot = head;
                    while (spot -> getNextNode() != NULL && newData > spot -> getContents()) {
                        trailer = spot;
                        spot = spot -> getNextNode();
                    }
                    if (newData > spot -> getContents() && spot -> getNextNode() == NULL)
                        insertTail(newData);
                    else {
                        newNode -> setNextNode(spot);
                        trailer -> setNextNode(newNode);
                        size++;
                    }
                }
            }
        }

        bool removeFirst(t target) {
            if (head == NULL)
                return false;
            else {
                SLNode<t>* trailer = NULL;
                SLNode<t>* spot = head;
                while (spot != NULL && spot -> getContents() != target) {
                    trailer = spot;
                    spot = spot -> getNextNode();
                }
            if (spot == NULL)
                return false;
            else if (trailer == NULL) {
                removeHead();
                return true;
            }
            else {
                trailer -> setNextNode(spot -> getNextNode());
                delete spot;
                size--;
                return true;
            }
            }
        }
        
        bool removeAll(t target) {
            bool removeOne = removeFirst(target);
            while (removeFirst(target) == true);
            return removeOne;
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
            for (SLNode<t>* i = head; i != NULL; i = i -> getNextNode()) {
                ss << i->getContents();
                if (i -> getNextNode() != NULL)
                    ss << ",";
            }
            string list = ss.str();
            return list;
        }
        
                
    private:
        SLNode<t>* head;
        unsigned int size;
};