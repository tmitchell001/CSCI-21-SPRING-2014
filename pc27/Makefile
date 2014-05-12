# Makefile for programming challenge 25
#
# CSCI 21, Spring 2014
#
# Programmer: Talea Mitchell
#

FLAGS = -Wall -Wextra -Werror -pedantic

# Target for programming challenge 27
# date completed: 5-12-2014
pc27: pc27.cpp BSTNode.o BSTree.o
	g++ $(FLAGS) -o pc27 pc27.cpp BSTNode.o BSTree.o
	
# Target for class BSTNode
BSTNode.o:BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) -o BSTNode.o BSTNode.cpp

# Target for class BSTree
BSTree.o:BSTree.h BSTree.cpp
	g++ -c $(FLAGS) -o BSTree.o BSTree.cpp