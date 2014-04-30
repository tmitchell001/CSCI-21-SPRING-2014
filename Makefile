# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Talea Mitchell
#

FLAGS = -Wall -Wextra -Werror -pedantic

# Target for programming challenge 23
# date completed: 4-28-2014
pc23: pc23.cpp
	g++ $(FLAGS) -o pc23 pc23.cpp
	
