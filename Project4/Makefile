# Makefile for programming project 4
#
# CSCI 21, Spring 2014
#
# Programmer: Talea Mitchell
#

FLAGS = -Wall -Wextra -Werror -pedantic

# Target for programming project 4
# date completed: 5-12-2014
project4: Driver.cpp TreeNode.o SearchTree.o
	g++ $(FLAGS) Driver.cpp TreeNode.o SearchTree.o -o project4

# Target for class TreeNode
TreeNode.o: TreeNode.h
	g++ -c $(FLAGS) -o TreeNode.o

# Target for class SearchTree
SearchTree.o: SearchTree.h
	g++ -c $(FLAGS) -o SearchTree.o

# Target for class Word
Word.o: Word.h Word.cpp
	g++ -c $(FLAGS) Word.cpp -o Word.o