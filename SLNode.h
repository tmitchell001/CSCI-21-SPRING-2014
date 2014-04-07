#pragma once
#include <iostream>
#include <string>
using namespace std;

class SLNode {
    public:
        int getdata();
        SLNode* getNext();
        void setNext(SLNode* newNext);
        void setData(int newData);
        
    private:
        int data;
        SLNode next;
    
}