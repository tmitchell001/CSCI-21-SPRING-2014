#include "Word.h"

Word::Word()
: word(""), count(1)
{
}

Word::Word(string newWord) {
    count = 1;
    word = newWord;
}

Word::~Word() {
    count = 1;
    word = "";
}

string Word::getWord() {
    return word;
}

unsigned int Word::getCount() {
    return count;
}

void Word::setWord(string newWord) {
    word = newWord;
}

void Word::setCount(unsigned int newCount) {
    count = newCount;
}

void Word::addCount() {
    count = count + 1;
}

