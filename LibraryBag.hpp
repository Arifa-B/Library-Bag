/*Arifa Baksh
Declares the LibraryBag class
*/

#ifndef LIBRARY_BAG_
#define LIBRARY_BAG_

#include<vector>
#include <iostream>
#include <string>
#include <iomanip>
#include "BookMaker.hpp"
using namespace std;

template<class BookMaker>
class LibraryBag
{
public:
	LibraryBag();
	int getSize() const;
	bool isEmpty() const;
	bool insert(const BookMaker& newEntry);
	bool remove(const BookMaker& anEntry);
	void clear();
	int getNumberOf(const string& anEntry) const; //returns the number of copies for a book title
	bool searchByName(const string& anEntry) const; //search for a book by its title
	void displayByAuthor(const string& anEntry) const; //show books by the same author 
	void displayByGenre(const string& anEntry) const; //show books in the same genre 
	void displayFavorites() const; //shows all favorite books
	void displayAllBooks() const; //shows all books (title, author, genre)

private:
	static const int DEFAULT_CAPACITY = 10; // limit the bag to hold 10 books
	BookMaker items[DEFAULT_CAPACITY];      
   int itemCount;                         
   int maxItems;   
};

//#include "LibraryBag.cpp"
#endif
