#include <iostream>
#include <sstream>
#include <fstream>
#include "Word.h"
#include "SearchTree.h"
using namespace std;

int main (int argc, char* argv[]) {
    stringstream ss;
    SearchTree<string>* tree;
    if (argc < 2) {
        cout << "Please specify filename i.e. test.txt";
    }
    else {
        bool created = false;
        ifstream filein(argv[1]);
        if (filein.good() == true) {
            string nextline;
            getline(filein, nextline);
            do {
                getline(filein, nextline);
                int ivalue = 0;
                char functionCall;
	            stringstream converter(nextline);
	            converter.exceptions(ios_base::failbit);
        	    try
	            {
		        converter >> functionCall;
		        converter >> ivalue;
		        }
	            catch (ios_base::failure f) {}
	            if (functionCall == '#') {
	            }
	            else if (functionCall == 'C') {
	                if (created == true) {
	                    delete tree;
	                    tree = NULL;
	                }
	                tree = new SearchTree<string>;
	                cout << "TREE CREATED\n";
	                created = true;
	            }
	            else if (functionCall == 'X') {
	                if (created == true) {
	                    cout << "TREE CLEARED\n";
	                }
	                else 
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (functionCall == 'D') {
	                if (created == true) {
	                    cout << "TREE DELETED";
	                    tree = NULL;
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (functionCall == 'I') {
	                if (created == true) {
	                    if (tree.insert(ivalue)) {
	                        cout << "WORD " << ivalue << "INCREMENTED";	                        
	                    }
	                    else
                            cout << "WORD " << ivalue << "INSERTED";
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (functionCall == 'F') {
	                if (created == true) {
	                    if (tree.insert(ivalue) == false)
	                        cout << "FOUND" << ivalue;
	                    else
	                        cout << ivalue << "NOT FOUND";
	                }
	                else
	                    cout << "MUST CREATE LIST INSTANCE";
	            }
	            else if (functionCall == 'R') {
	                if (created == true) {
	                    if (tree.getRoot() == NULL) {
	                        cout << "TREE EMPTY";
	                    }
	                    else {
	                    tree.remove(ivalue);
	                    cout << "REMOVED" << "x";
	                    }
	                }
	                else {
	                    cout << "MUST CREATE LIST INSTANCE";
	                }
	            }
	            else if (functionCall == 'G') {
	                cout << "GOT" << "x" << "COUNT";
	            }
	        }
	        while (nextline != "");
        }
    }
}
