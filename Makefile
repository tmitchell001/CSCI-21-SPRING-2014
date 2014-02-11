#
# Grader comments 2014.02.05
#
# Did this makefile work for you when you built
# pc4? It won't work for me; your editor might
# not make it obvious, but there's a tab character
# at the beginning of line #26. Make cares about
# tab characters; they have a specific meaning.
# No points deducted; Boyd will have to go over
# this in class.
#
# I left the tab character there so you can
# experiment with finding it if you're interested.
#
#
# Grader comments 2014.02.10
#
# Still no joy on the makefile. Be sure to use it
# for building your assignment before turning it
# in. That way you'll know it works. Note that
# the tab character is preventing the makefile from
# processing properly, and there's a typo in your
# build command for pc5. Also don't forget to
# add in the FLAGS Boyd mentioned in class on
# Monday. Let me know if I can help. --Rob
#
# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Talea Mitchell
#

# Target for programming challenge 3
# Date completed: 2-3-2014
challenge-3: challenge-3.cpp
	g++ -o challenge-3 challenge-3.cpp
	
# Target for programming challenge 4
# date completed: 2-5-2014
pc4: pc4.cpp
    g++ -o pc4 pc4.cpp
    
# Target for programming challenge 5
# date completed: 2-10-2014
pc5: pc5.cpp
    gK++ -o pc5 pc5.cpp  
