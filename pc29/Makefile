FLAGS = -Wall -Wextra -Werror -pedantic

pc29: pc29.cpp TreasureChest.o
	g++ $(FLAGS) pc29.cpp TreasureChest.o -o pc29

TreasureChest.o: TreasureChest.h TreasureChest.cpp
	g++ $(FLAGS) -c TreasureChest.cpp -o TreasureChest.o