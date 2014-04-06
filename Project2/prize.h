#pragma once
#include <iostream>
#include <string>
using namespace std;

class prize {
    public:
        prize(string itemName, unsigned int itemValue);
         overloaded friend operator==:
            if (prizeName == prizeName && prizeValue == prizeValue)
                return true;
            else
                return false;
        string getitemName();
        void setitemName(string newItemName);
        unsigned int getitemValue();
        void setitemValue(unsigned int newItemValue);
    private:
        string itemName;
        unsigned int itemValue;
};