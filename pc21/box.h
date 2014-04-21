#pragma once
#include <iostream>
using namespace std;



template <class T>
class Box {
    public:
        Box(T newContents)
        : contents(newContents)
        {
        }
        
        void setContents(T newContents) {
            contents = newContents;
        }
        
        T getContents() const {
            return contents;
        }
        
        friend ostream &operator<<( ostream &output, 
            const Box &B )
      { 
        output << B.contents;
        return output;            
      }

    private:
        T contents;
};
