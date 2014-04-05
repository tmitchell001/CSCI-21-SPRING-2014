#pragma once
class box {
public
    box() {
        boxNumber = 0;
        boxColor = "NO COLOR";
        prizeCapacity = 5;
        prizeCount = 0;
    }
    box(boxNumber, boxColor, prizeCapacity, prizeCount)
    ~box() {
        delete box;
    void getBoxColor();
    void setBoxColor();
    void getBoxNumber();
    void setBoxNumber();
    void getPrizeCapacity();
    void getPrizeCount();
    bool addPrize(Prize);
    Prize& getPrize(unsigned int);
    Prize removePrize(unsigned int);
    }
private:
    unsigned int boxNumber;
    string boxColor;
    Prize scratch;
    Prize* prizes;
    unsigned int prizeCapacity;
    unsigned int prizeCount;
};