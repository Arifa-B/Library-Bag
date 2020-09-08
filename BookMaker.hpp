/*Arifa Baksh
Declares the BookMaker class
*/

#ifndef BOOK_MAKER
#define BOOK_MAKER
#include <string>
#include <iostream>
using namespace std;


class BookMaker
{
	public:		
		BookMaker(); 		//default constructor
		BookMaker(string name, string author, string genre, bool favorite = false); 		//parameterized constructor
		string getName() const;		
		string getAuthor() const;
		string getGenre() const;
		bool isFavorite() const;		
		void setName(string name);
		void setAuthor(string author);
		void setGenre(string genre);
		void setFavorite();
	private:
		string name_;
		string author_;
		string genre_;
		bool favorite_;
};

#endif

