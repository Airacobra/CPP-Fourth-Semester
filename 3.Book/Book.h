#pragma once
#include "Page.h"

//klasa reprezentujaca ksiazke, posiada tablcie wskaznikow na strony
class Book
{
public:
	//kostnruktor, ma domyslne argumenty
	Book(const int size = 0, const std::string author = "empty", const std::string title = "empty", bool copy = false);
	//kostnruktor, porzebne do funkcji klasy katalog
	Book(const std::string title);

	//dodaje strone do tablicy wskaznikow
	void AddPage(Page *pageToAdd);
	//ustawia text
	void AddText(const std::string text);
	//ustawia naglowek
	void AddHeader(const std::string header);
	//ustawia tytul
	void AddTitle(const std::string title);
	void Copy(Book *b);
	void Print() const;
	~Book();
	std::string GetTitle() const;
private:	
	Page ** b_book;
	int b_sizeOfBook; 
	bool b_isCopy;
	int b_current;
	std::string b_author;
	std::string b_title;
};