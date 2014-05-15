//
// Grader comments 2014.05.13
// -155 points total
//
#include "DLList.h"

DLList::DLList() 
: size(0), head (NULL), tail(NULL)
{
}

DLList::~DLList() {
	//
	// Grader comments 2014.05.13
	// Call to clear() is commented out. -10 points
	//
    //clear();
}

unsigned int DLList::getSize() {
    return size;
}

//
// Grader comments 2014.05.13
// Doesn't manage tail when necessary.
// Doesn't set the new head's previous node to zero.
// -15 points.
//
void DLList::pushFront(DLNode newContents) {
    if (head == NULL) {
        head = new DLNode(newContents);
		tail = head;					// RFB -- to make it run
        size++;
    }
    else if (head) {
        DLNode* aNewNode = new DLNode(newContents);
        aNewNode->setNext(head);
		head->setPrevious(aNewNode);	// RFB -- to make it run
        head = aNewNode;
        size++;
    }
}

//
// Grader comments 2014.05.13
// Decreases size variable rather than increasing it.
// Doesn't manage head when necessary.
// Doesn't properly insert the new node.
// -20 points.
//
void DLList::pushBack(DLNode newContents) {
    if (tail == NULL) {
        tail = new DLNode(newContents);
        //size--;
		size++;		// RFB -- so it will run
		head = tail;// RFB -- so it will run
    }
    else if(tail) {
        DLNode* aNewNode = new DLNode(newContents);
        //aNewNode->setNext(tail);
		aNewNode->setPrevious(tail);	// RFB -- so it will run
		tail->setNext(aNewNode);		// RFB -- so it will run
        tail = aNewNode;
        //size--;
		size++;							// RFB -- so it will run
    }
}

//
// Grader comments 2014.05.15
// Doesn't insert node onto empty list.
// -10 points
//
void DLList::insert (int newContents) {
    DLNode* newNode = new DLNode(newContents);
//    if (head == NULL)								// Rob
//        DLNode(newContents);						// Rob
	
	// Rob
	if(head == NULL) {
		head = tail = newNode;
		size++;
	}
	
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

//
// Grader comments 2014.05.15
// Doesn't handle empty list properly. Must throw an exception.
// -10 points
int DLList::getFront () const {
	if(head == NULL) {	// Rob
		throw false;
	}
    return head -> getContents();
}

//
// Grader comments 2014.05.15
// Doesn't handle empty list properly. Must throw an exception.
// -10 points
int DLList::getBack () const {
	if(head == NULL) {	// Rob
		throw false;
	}
    return tail -> getContents();
}

//
// Grader comments 2014.05.13
// Hangs the program, because 'spot' never changes in the while() loop.
// Doesn't report empty list.
// -20 points.
//
bool DLList::get (int target) const {
	if(head == NULL) {	// Rob
		throw false;
	}
    DLNode* spot = head;
    DLNode* trailer = NULL;
    while (spot != NULL) {
        trailer = spot;
        if (trailer -> getContents() == target) {
            return true;
        }
		
		spot = spot->getNext();	// RFB -- so it will run
    }
	
            return false;
}

//
// Grader comments 2014.05.13
// Doesn't manage tail when necessary.
// Doesn't zero out head's prev pointer when necessary.
// Doesn't report empty list to driver.
// -20 points.
//
void DLList::popFront() {
    if (head != NULL) {
        DLNode* oldHead = head;
        head = oldHead -> getNext();
        delete oldHead;
        size--; 
		
		// RFB
		if(size == 0) {
			tail = 0;
		} else {
			head->setPrevious(0);
		}
    }
	
	// Rob
	else {
		throw false;
	}
}

//
// Grader comments 2014.05.13
// Doesn't manage tail when necessary.
// Doesn't zero out head's prev pointer when necessary.
// Doesn't report empty list to driver.
// -20 points.
//
void DLList::popBack() {
    if (tail != NULL) {
        DLNode* oldTail = tail;
        tail = tail -> getPrevious();
        delete oldTail;
        size--;
		
		// RFB
		if(size == 0) {
			head = 0;
		} else {
			tail->setNext(0);
		}
    }
	
	// Rob
	else {
		throw false;
	}
}

//
// Grader comments 2014.05.13
// Doesn't manage tail when necessary.
// Doesn't insert new node properly.
// Doesn't report empty list to driver.
// -20 points.
//

bool DLList::removeFirst(int target) {
    //if (head == NULL)		// Rob
    //    return false;		// Rob
	if(head == NULL) {		// Rob
		throw false;
	}
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
			
			// RFB
			DLNode* newNext = spot->getNext();
			if(newNext == 0) {
				tail = trailer;
			} else {
				newNext->setPrevious(trailer);
			}
			
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