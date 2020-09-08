/*Arifa Baksh
Defines the functions of the LibraryBag class
*/

#include "BookMaker.hpp"
#include "LibraryBag.hpp"
#include <cstddef>
using namespace std;
#include <iostream>

template<class BookMaker>
LibraryBag<BookMaker>::LibraryBag(): itemCount(0), maxItems(DEFAULT_CAPACITY)
{
}  // end default constructor

template<class BookMaker>
int LibraryBag<BookMaker>::getSize() const
{
	return itemCount;
}  // end getSize

template<class BookMaker>
bool LibraryBag<BookMaker>::isEmpty() const
{
	return itemCount == 0;
}  // end isEmpty

template<class BookMaker>
bool LibraryBag<BookMaker>::insert(const BookMaker& newEntry)
{
	bool canAdd = (itemCount < maxItems);
	if (canAdd)
	{
		items[itemCount] = newEntry;
		itemCount++;
	}
	return canAdd;
}  // end insert
   
template<class BookMaker>
bool LibraryBag<BookMaker>::remove(const BookMaker& anEntry)
{
   int index = getPosition(anEntry);
	bool canRemove = !isEmpty() && (index > -1);
	if (canRemove)
	{
		itemCount--;
		items[index] = items[itemCount];
	}
	return canRemove;
}  // end remove

template<class BookMaker>
void LibraryBag<BookMaker>::clear()
{
	itemCount = 0;
}  // end clear

template<class BookMaker>
int LibraryBag<BookMaker>::getNumberOf(const string& anEntry) const
{
   int frequency = 0;
   int currPos = 0;
   while (currPos < itemCount)
   {
      if (items[currPos].getName() == anEntry)
      {
         frequency++;
      } 
      currPos++; 
   }
   return frequency;
}  // end getNumberof

template<class BookMaker>
bool LibraryBag<BookMaker>::searchByName(const string& anEntry) const
{
   bool found = false;
   int currPos = 0;        
   while (!found && (currPos < itemCount))
   {
      if (anEntry == items[currPos].getName())
      {
         found = true;
      }
      currPos++;           
   }     
   return found;
}  // end searchByName

template<class BookMaker>
void LibraryBag<BookMaker>::displayByAuthor(const string& anEntry) const
{
   cout << "The following are in: " << anEntry << endl;
   for(int j = 0; j < itemCount; j++)
   {
      if(items[j].getGenre() == anEntry)
      {
         cout << items[j].getName() << endl;
      }
   }
}  // end displayByAuthor

template<class BookMaker>
void LibraryBag<BookMaker>::displayByGenre(const string& anEntry) const  
{
   cout << "The following are by: " << anEntry << endl;
   for(int j = 0; j < itemCount; j++)
   {
      if(items[j].getAuthor() == anEntry)
      {
         cout << items[j].getName() << endl;
      }
   }
}  // end displayByGenre

template<class BookMaker>
void LibraryBag<BookMaker>::displayFavorites() const  
{
   cout << "The following are your favorite books:" << endl;
   for(int j = 0; j < itemCount; j++)
   {
      if(items[j].isFavorite() == true)
      {
         cout << items[j].getName() << endl;
      }
   }
}  // end displayFavorites

template<class BookMaker>
void LibraryBag<BookMaker>::displayAllBooks() const
{
   cout << "You have the following books: " << endl;
   for(int j = 0; j < itemCount; j++)
   {
      cout << items[j].getName() << ", " << items[j].getAuthor() << ", " << items[j].getGenre() << endl;
   }
} // end displayAllBooks