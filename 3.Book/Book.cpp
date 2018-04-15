#include "Book.h"

Book::Book(const int size, const std::string author, const std::string title, bool copy)
{
	b_sizeOfBook = size; 
	b_isCopy = copy;
	b_current = 0;
	b_author = author;
	b_title = title;
}

Book::Book(const std::string title)
{
	b_title = title;
}

void Book::AddPage(Page* pageToAdd)
{
	Page **new_book = new Page*[b_sizeOfBook];
	for(int i = 0; i < b_sizeOfBook; i++)
	{
		new_book[i] = b_book[i]->Copy();
		delete b_book[i];
	}

	delete [] b_book;

	b_sizeOfBook++;
	b_book = new Page *[b_sizeOfBook];
	for(int i = 0; i < b_sizeOfBook - 1; i++)
	{
		b_book[i] = new_book[i] -> Copy();
		delete new_book[i];
	}

	delete [] new_book;

	b_book[b_sizeOfBook - 1] = pageToAdd->Copy();
}

void Book::Print() const
{
	if(b_isCopy)
		std::cout<<"\nBook::autor(copy) "<< b_author<<"\n";
	else 
		std::cout<<"\nBook::autor "<< b_author<<"\n";


	for(int i = 0; i < b_sizeOfBook; i++)
	{
		b_book[i]->Print(i);
	}
}

void Book::AddHeader(const std::string header)
{
	for(int i = 1; i < b_sizeOfBook; i++)
	{
		b_book[i]->AddHeader(header);
		b_book[i]->AddText("empty");
	}
}

void Book::AddTitle(const std::string title)
{
	b_book[0]->AddHeader("empty");
	b_book[0]->AddText(title);
	b_title = title;
}

void Book::AddText(const std::string text)
{
	if(b_current < b_sizeOfBook)
	{
		b_book[b_current++]-> AddText(text);
	}
	else
	{
		std::cout<<"\n[ERROR]:: No enough pages in the book!\n";
	}
}

void Book::Copy(Book *b)
{
	b_isCopy = true;
	b_author = b->b_author;
	b_title = b->b_title;
	b_sizeOfBook = b->b_sizeOfBook;
	b_book = new Page *[b->b_sizeOfBook];
	for(int i = 0; i < b->b_sizeOfBook; i++)
	{
		b_book[i] = b->b_book[i]->Copy();
	}
}

std::string Book::GetTitle() const
{
	return b_title;
}

Book::~Book()
{
	for(int i = 0; i < b_sizeOfBook; i++)
	{
		delete b_book[i];
	}
	delete [] b_book;
}