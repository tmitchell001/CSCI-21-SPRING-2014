include "pc17.h"

SLNode::SLNode()
: next(NULL), data(0)
{
}

SLNode::SLNode(int newData)
: next(NULL), data(newData)
{
}

SLNode::~SLNode() {
    next = NULL;
    data = 0;
}

int SLNode::getContents() {
    return data;   
}
SLNode* SLNode::getNextNode() {
    return next;
}
void SLNode::setNextNode(SLNode* newNext) {
    next = newNext;
}
void SLNode::setContents(int newData) {
    data = newData;
}