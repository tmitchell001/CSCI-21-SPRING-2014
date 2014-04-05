#pragma once
#include <iostream>
#include <string>
using namespace std;

class prize {
    public:
        prize(itemName = "NO NAME", itemValue = 0);
        prize(itemName, itemValue);
        ~prize() {
            
        };
        friend overloaded operator==:
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