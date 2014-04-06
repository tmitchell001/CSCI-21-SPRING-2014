FLAGS = -Wall -Wextra -Werror -pedantic

project-2: prize.o box.o project-2.o
	g++ $(FLAGS) prize.o box.o project-2.o -o project-2

project-2.o: project2.cpp
	g++ -c $(FLAGS) project2.cpp -o project-2.o

box.o: box.h box.cpp
	g++ -c $(FLAGS) box.cpp -o box.o

prize.o: prize.h prize.cpp
	g++ -c $(FLAGS) prize.cpp -o prize.o

clean:
	rm -f *.o

cleanall: clean
	rm -f project-2