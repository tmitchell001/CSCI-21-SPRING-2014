# Makefile for programming challenge 20
#
# CSCI 21, Spring 2014
#
# Programmer: Talea Mitchell
#

FLAGS = -Wall -Wextra -Werror -pedantic

# Target for programming challenge 20
# date completed: 4-14-2014
pc20: pc20.cpp SList.o SLNode.o
	g++ $(FLAGS) -o pc20 pc20.cpp SList.o SLNode.o
	
# Target for SList.o
# date completed 4-14-2014
SList.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp
	
# Target for SLNode.o
# date completed 4-9-2014
SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp