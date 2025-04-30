#pragma once
#include "Book.h"
class Library
{
	string name;
	Book* books;
	int countBook;
public:
	Library();
	Library(string name);
	Library(const Library& other);
	Library(Library&& other);
	Library operator =(const Library& other);
	void AddBook(Book book);
	void Show()const;
	~Library()
	{
		if (books != nullptr)
			delete[]books;
	}
};