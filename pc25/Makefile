# Makefile for programming challenge 25
#
# CSCI 21, Spring 2014
#
# Programmer: Talea Mitchell
#

FLAGS = -Wall -Wextra -Werror -pedantic

# Target for programming challenge 24
# date completed: 5-5-2014
pc24: pc24.cpp BSTNode.o
	g++ $(FLAGS) -o pc24 pc24.cpp BSTNode.o
	
# Target for class
BSTNode.o:BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) -o BSTNode.o BSTNode.cpp
	