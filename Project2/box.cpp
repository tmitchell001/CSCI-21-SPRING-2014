#include "box.h"
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
Prize& getPrize(unsigned int);
Prize removePrize(unsigned int);