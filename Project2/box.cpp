#include "box.h"

box::box(unsigned int boxNumber, string boxColor, prizeCapacity, prizeCount) {
    boxNumber = 0;
    boxColor = "NO COLOR";
    prizeCapacity = 5;
    prizeCount = 0;
}
    
box::~box() {
    delete box;
}
    

void box::getBoxColor() {
    return boxColor;
}

void box::setBoxColor(newColor) {
    boxColor = newColor;
}

void box::getBoxNumber() {
    return boxNumber;
}

void box::setBoxNumber(newNumber) {
    boxNumber = newNumber;
}

void box::getPrizeCapacity() {
    return prizeCapacity;
}

void box::getPrizeCount() {
    return prizeCount;
}

bool box::addPrize(Prize newPrize) {
    if (prizeCapacity > prizeCount) {
        prize[prizeCount] = newPrize;
        return true;
    }
    else return false;
        
}
string box::getPrize(unsigned int) {
    return car.getItemName();
}
Prize box::removePrize(unsigned int);