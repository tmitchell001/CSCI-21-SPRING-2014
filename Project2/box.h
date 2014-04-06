#pragma once
#include "prize.h"
#include <cassert>
#include <iostream>
#include <string>
using namespace std;

class box {
public:
    
    void getBoxColor();
    void setBoxColor();
    void getBoxNumber();
    void setBoxNumber();
    void getPrizeCapacity();
    void getPrizeCount();
    bool addPrize(prize newPrize);
    string getPrize(unsigned int);
    prize removePrize(unsigned int);

private:

    unsigned int boxNumber;
    string boxColor;
    string scratch;
    class Prize* prizes;
    unsigned int prizeCapacity;
    unsigned int prizeCount;
};