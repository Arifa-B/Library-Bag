/*Arifa Baksh
Defines the functions of the BookMaker class
*/

#include "BookMaker.hpp"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

BookMaker::BookMaker()
{
	name_ = "";
	author_ = "";
	genre_ = "";
	favorite_ = 0;
}

BookMaker::BookMaker (string name, string author, string genre, bool favorite) //parameterized constructor, assigns parameter values to private data members
{
	name_ = name;
	author_ = author;
	genre_ = genre;
	favorite_ = favorite;
}

string BookMaker::getName() const 
{
	return name_;
}

string BookMaker::getAuthor() const 
{
	return author_;
}

string BookMaker::getGenre() const 
{
	return genre_;
}

bool BookMaker::isFavorite() const
{
	return favorite_;
}

void BookMaker::setName(string name)
{
  name_ = name;
}

void BookMaker::setAuthor(string author) 
{
  author_ = author;
}

void BookMaker::setGenre(string genre) 
{
  genre_ = genre;
}

void BookMaker::setFavorite()
{
  favorite_ = true;
}