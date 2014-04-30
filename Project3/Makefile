FLAGS = -Wall -Wextra -Werror -pedantic

project3: DLList.o DLNode.o project3.o
	g++ $(FLAGS) DLList.o DLNode.o project3.o -o project3

project3.o: driver.cpp DLList.h DLNode.h
	g++ -c $(FLAGS) driver.cpp -o project3.o

DLList.o: DLList.h DLList.cpp
	g++ -c $(FLAGS) DLList.cpp -o DLList.o

DLNode.o: DLNode.h DLNode.cpp
	g++ -c $(FLAGS) DLNode.cpp -o DLNode.o

clean:
	rm -f *.o

cleanall: clean
	rm -f project3