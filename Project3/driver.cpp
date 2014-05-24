//
// Grader comments 2014.05.14
// + 50: naming conventions good
// +  0: header documentation missing
// + 10: formatting mostly good -- see main() below
// +  6: driver -- see comments below; look for "grader comments" and "Rob"
// +150: DLNode good
// +145: DLList -- see comments DLList.cpp
// 
#include <iostream>
#include <fstream>
#include <sstream>
#include "DLList.h"
#include "DLNode.h"
using namespace std;

//
// Grader comments 2014.05.15
//   -5: Doesn't report bad filename.
//  -20: DLList is supposed to be a dynamic object. The create/destroy commands
//       are supposed to correspond to 'new' and 'delete' calls.
//   -5: Output messages a bit messy.
//  -10: Needs exception handling to coordinate with DLList.cpp
// -104: Missing functionality: A, B, E, F, G, I, K, N, P, R, T, X, Z
//
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
				
			try {											// Rob -- added exception handling
	            if (useless == 'C' || useless == 'c') {
	                created = true;
	                cout << "LIST CREATED" << endl;
	            }
	            else if (useless == 'X' || useless == 'x') {
	                if (created == true) {
	                //list.clear();
						list.clear();									// Rob
	                cout << "LIST CLEARED" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'D' || useless == 'd') {
	                if (created == true) {
	                //list.~DLList();
	                created = false;
	                cout << "LIST DELETED" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'I' || useless == 'i') {
	                if (created == true) {
	                    //list.insert(ivalue);
						list.insert(ivalue);							// Rob
	                    cout << "VALUE " << ivalue << "INSERTED" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'F' || useless == 'f') {
	                if (created == true) {
	                    //list.pushFront(ivalue);
						list.pushFront(ivalue);							// Rob
	                    cout << "VALUE" << ivalue << "ADDED TO HEAD" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'B' || useless == 'b') {
	                if (created == true) {

	                        //list.pushBack(ivalue);
						list.pushBack(ivalue);							// Rob
	                        cout << "VALUE" << ivalue << "ADDED TO TAIL" << endl;

	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'A' || useless == 'a') {
	                if (created == true) {
	                    //if (head != NULL) {
	                    //list.getFront();
	                    //cout << "VALUE" << "X" << "AT HEAD" << endl;	// Rob
						int temp = list.getFront();						// Rob
						cout << "VALUE " << temp << " AT HEAD" << endl;	// Rob
	                }
	                    else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'Z' || useless == 'z') {
	                if (created == true) {
	                   // if (head != NULL) {
	                   // list.getBack();
	                   //}
						//cout << "VALUE X AT TAIL" << endl;			// Rob
						int temp = list.getBack();						// Rob
						cout << "VALUE " << temp << " AT TAIL" << endl;	// Rob
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'T' || useless == 't') {
	                if (created == true) {
	                   // list.popFront();
						list.popFront();								// Rob
	                   cout << "REMOVED HEAD" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'K' || useless == 'k') {
	                if (created == true) {
	                   // list.popBack();
						list.popBack();									// Rob
	                   cout << "REMOVED TAIL" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'E' || useless == 'e') {
	                if (created == true) {
	                   // list.removeAll(ivalue);
	                   //cout << "VALUE X ELIMINATED" << endl;			// Rob
						
						// Rob
						if(list.removeAll(ivalue) == true) {
							cout << "VALUE " << ivalue << " ELIMINATED" << endl;
						} else {
							cout << "VALUE " << ivalue << " NOT FOUND" << endl;
						}
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'R' || useless == 'r') {
	                if (created == true) {
	                   // list.removeFirst(ivalue);
 	                   //cout << "VALUE X REMOVED" << endl;				// Rob
						
						// Rob
						if(list.removeFirst(ivalue) == true) {
							cout << "VALUE " << ivalue << " REMOVED" << endl;
						} else {
							cout << "VALUE " << ivalue << " NOT FOUND" << endl;
						}
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'G' || useless == 'g') {
	                if (created == true) {
	                  //  list.get(ivalue);
						list.get(ivalue);								// Rob
	                  cout << "VALUE FOUND" << endl;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'N' || useless == 'n') {
	                if (created == true) {
	                    //list.getSize();
	                    //cout << "LIST SIZE IS ";
						
						int t = list.getSize();							// Rob
						cout << "LIST SIZE IS " << t << endl;			// Rob
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
	            else if (useless == 'P' || useless == 'p') {
	                if (created == true) {
	                    //list.ostream&();
	                    //cout << "NUMBERS" << endl;					// Rob
						cout << list << endl;							// Rob
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE\n";
	            }
			} catch(bool) {						// Rob
				cout << "LIST EMPTY" << endl;
			}
          } while (filein.good() == true);
      }
    }
}