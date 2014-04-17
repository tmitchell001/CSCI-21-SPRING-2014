#pragma once
#include <iostream>
#include <string>
using namespace std;

class prize {
    public:
        prize(string itemName, unsigned int itemValue);
            friend bool operator== (prize prize1, prize prize2) {
            if (prize1.itemName == prize2.itemName && prize1.itemValue == prize2.itemValue)
                return true;
            else
                return false;
            }
        string getitemName();
        void setitemName(string newItemName);
        unsigned int getitemValue();
        void setitemValue(unsigned int newItemValue);
    private:
        string itemName;
        unsigned int itemValue;
};