#include "Catalog.h"

Catalog::Catalog(const std::string title ,const int size)
{
	c_title = title;
	c_size = size;
}

void Catalog::AddBook(Book* b)
{
	c_size++;
	Book **new_book = new Book *[c_size];
	for(int i = 0 ; i < c_size - 1; i++)
	{
		std::string str = c_catalog[i]->GetTitle();
		new_book[i] = new Book(str);
		delete  c_catalog[i];
	}

	delete [] c_catalog;

	new_book[c_size - 1] = b;
	c_catalog = new_book;
}

void Catalog::Print() const
{
	std::cout<<"\nCatalog::name " <<c_title<<"\n";
	for(int i = 0; i < c_size; i++)
	{
		std::cout<<"Catalog::book("<<i<<") "<<c_catalog[i]->GetTitle()<<"\n";
	}

}

Catalog::~Catalog()
{
	for(int i = 0; i < c_size; i++)
		delete c_catalog[i];
	delete [] c_catalog;
}