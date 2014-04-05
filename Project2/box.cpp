#include "box.h"

box(unsigned int boxNumber, string boxColor, prizeCapacity, prizeCount) {
        boxNumber = 0;
        boxColor = "NO COLOR";
        prizeCapacity = 5;
        prizeCount = 0;
    }
    ~box() {
        delete box;
    }
    

void getBoxColor() {
    return boxColor;
}
void setBoxColor(newColor) {
    cout << "Box Color?" << endl;
    boxColor = newColor;
}
void getBoxNumber() {
    return boxNumber;
}
void setBoxNumber(newNumber) {
    cout << "Box Number?\n";
    boxNumber = newNumber;
}
void getPrizeCapacity() {
    return prizeCapacity;
}
void getPrizeCount() {
    return prizeCount;
}
bool addPrize(Prize newPrize) {
    if (prizeCapacity > prizeCount) {
        prize[prizeCount] = newPrize;
        return true;
    }
    else return false;
        
}
string getPrize(unsigned int) {
    return car.getItemName();
}
Prize removePrize(unsigned int);