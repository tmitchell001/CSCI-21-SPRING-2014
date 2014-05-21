#pragma once

#include <algorithm> // for sort
#include <cstdlib> // for NULL
#include <iostream> // for operator<<
#include <string>
#include <vector>
using namespace std;

struct Item
{
	Item (string newName="noname", unsigned int newValue=0, unsigned int newQuantity=0)
	: name(newName), value(newValue), quantity(newQuantity)
	{
	}
	
	friend ostream& operator<< (ostream& outs, const Item& src)
	{
		outs << src.name;
		return outs;
	}
	
	string name;
	unsigned int value;
	unsigned int quantity;
};

class TreasureChest
{
	public:
		void addItem (const Item& newItem);
		void insertItem (const Item& newItem, unsigned int position);
		const Item* getItem (unsigned int position);
		Item removeItem (unsigned int position) throw (string);
		void clear ();
		bool empty () const;
		unsigned int getSize () const;
		void sortByName ();
		void sortByValue ();
		void sortByQuantity ();
		friend ostream& operator<< (ostream& outs, const TreasureChest& src);
		
	private:
		vector<Item> chest;
};

/*
 * Compare two items by name.
 * @return true if lsrc.name < rsrc.name, else false
 */
bool compareItemsByName (const Item& lsrc, const Item& rsrc);

/*
 * Compare two items by value.
 * @return true if lsrc.value < rsrc.value, else false
 */
bool compareItemsByValue (const Item& lsrc, const Item& rsrc);

/*
 * Compare two items by quantity.
 * @return true if lsrc.quantity < rsrc.quantity, else false
 */
bool compareItemsByQuantity (const Item& lsrc, const Item& rsrc);