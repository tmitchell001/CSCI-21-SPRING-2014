#include <iostream>
#include <fstream>
#include <sstream>
#include "DLList.h"
#include "DLNode.h"
using namespace std;

int main(int argc, char* argv[]) {
    //ss << argv[1]; // this is the filename
    stringstream sstream;
    if (argc < 2)
        cerr << "Please Specify Filename" << endl;
    else {
    ifstream filein(argv[1]);
    DLList list;
    bool created = false;
    if (filein.good() == true) {
        string nextline;
        getline(filein, nextline);
        do {
            getline(filein, nextline);
                int ivalue = 0;
                char useless = 0;
	            stringstream converter(nextline);
	            converter.exceptions(ios_base::failbit);
        	    try
	            {
		        converter >> useless;
		        converter >> ivalue;
		        }
	            catch (ios_base::failure f) {}
	            if (useless == 'C' || useless == 'c') {
	                created = true;
	                cout << "LIST CREATED" << endl;
	            }
	            else if (useless == 'X' || useless == 'x') {
	                if (created == true) {
	                //list.clear();
	                cout << "LIST CLEARED" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'D' || useless == 'd') {
	                if (created == true) {
	                //list.~DLList();
	                created = false;
	                cout << "LIST DELETED" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'I' || useless == 'i') {
	                if (created == true) {
	                    //list.insert(ivalue);
	                    cout << "VALUE " << ivalue << "INSERTED" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'F' || useless == 'f') {
	                if (created == true) {
	                    //list.pushFront(ivalue);
	                    cout << "VALUE" << ivalue << "ADDED TO HEAD" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'B' || useless == 'b') {
	                if (created == true) {

	                        //list.pushBack(ivalue);
	                        cout << "VALUE" << ivalue << "ADDED TO TAIL" << endl;

	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'A' || useless == 'a') {
	                if (created == true) {
	                    //if (head != NULL) {
	                    //list.getFront();
	                    cout << "VALUE" << "X" << "AT HEAD" << endl;
	                }
	                    else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'Z' || useless == 'z') {
	                if (created == true) {
	                   // if (head != NULL) {
	                   // list.getBack();
	                   //}
	                   cout << "VALUE X AT TAIL" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'T' || useless == 't') {
	                if (created == true) {
	                   // list.popFront();
	                   cout << "REMOVED HEAD" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'K' || useless == 'k') {
	                if (created == true) {
	                   // list.popBack();
	                   cout << "REMOVED TAIL" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'E' || useless == 'e') {
	                if (created == true) {
	                   // list.removeAll(ivalue);
	                   cout << "VALUE X ELIMINATED" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'R' || useless == 'r') {
	                if (created == true) {
	                   // list.removeFirst(ivalue);
	                   cout << "VALUE X REMOVED" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'G' || useless == 'g') {
	                if (created == true) {
	                  //  list.get(ivalue);
	                  cout << "VALUE FOUND" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'N' || useless == 'n') {
	                if (created == true) {
	                    //list.getSize();
	                    cout << "LIST SIZE IS ";
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (useless == 'P' || useless == 'p') {
	                if (created == true) {
	                    //list.ostream&();
	                    cout << "NUMBERS" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
            }
         while (filein.good() == true);
    }
    }
}