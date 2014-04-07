include "pc17.h"

SLNode()
: next(NULL), data(0)
{
}

SLNode(int newData)
: next(NULL), data(newData)
{
}

~SLNode() {
    next = NULL;
    data = 0;
}

int getdata() {
    return data;   
}
SLNode* getNext() {
    return next;
}
void setNext(SLNode* newNext) {
    next = newNext;
}
void setData(int newData) {
    data = newData;
}