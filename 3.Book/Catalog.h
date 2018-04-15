#pragma once
#include "Book.h"
#include <string>
//klasa reprezentujaca katalgo, posiada tablcie wskaznikow na ksiazki
class Catalog
{
public:
	//kostnruktor, ma domyslne argumenty
	Catalog(const std::string title = "empty", const int size = 0);
	//dodaje ksiazke do tablicy wskaznikow
	void AddBook(Book *b);
	//wypisuje
	void Print() const;
	~Catalog();


private:	
	std::string c_title;
	int c_size;
	Book ** c_catalog;
};