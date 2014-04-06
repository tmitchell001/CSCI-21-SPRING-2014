#include "prize.h"
#include <iostream>
#include <string>
using namespace std;

prize::prize(string itemName, unsigned int itemValue);

~prize() {
            
}

string prize::getitemName() {
    return itemName;
}
void prize::setitemName(newItemName) {
    itemName = newItemName;
}
unsigned int prize::getitemValue() {
    return itemValue;
}
void prize::setitemValue(newItemValue) {
    itemValue = newItemValue;
}
