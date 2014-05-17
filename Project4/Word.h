#pragma once
#include <sstream>
#include <iostream>

using namespace std;

class Word {
    public:
        Word();
        Word(string newWord);
        ~Word();
        string getWord();
        unsigned int getCount();
        void setWord(string newWord);
        void setCount(unsigned int newCount);
        void addCount();
        friend bool operator== (Word word1, Word word2) {
            if (word1.word == word2.word)
                return true;
            else
                return false;
        }
    
        friend bool operator< (Word word1, Word word2) {
            if (word1.count < word2.count)
                return true;
            else
                return false;
        }

        friend bool operator> (Word word1, Word word2) {
            if (word1.count > word2.count)
               return true;
            else
                return false;
        }

        friend ostream& operator<< (ostream& os, Word word1) {
            os << word1;
            return os;
        }
        
    private:
        string word;
        unsigned int count;
};