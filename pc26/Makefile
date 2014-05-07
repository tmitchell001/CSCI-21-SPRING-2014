# Makefile for programming challenge 25
#
# CSCI 21, Spring 2014
#
# Programmer: Talea Mitchell
#

FLAGS = -Wall -Wextra -Werror -pedantic

# Target for programming challenge 26
# date completed: 5-7-2014
pc26: pc26.cpp BSTNode.o BSTree.o
	g++ $(FLAGS) -o pc26 pc26.cpp BSTNode.o BSTree.o
	
# Target for class BSTNode
BSTNode.o:BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) -o BSTNode.o BSTNode.cpp

# Target for class BSTree
BSTree.o:BSTree.h BSTree.cpp
	g++ -c $(FLAGS) -o BSTree.o BSTree.cpp