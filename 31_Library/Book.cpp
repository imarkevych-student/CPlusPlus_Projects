#include "Book.h"

Book::Book()
{
	title = "no title";
	author = "no author";
	genre = None;
	pages = 0;
	year = 0;
}

void Book::ShowInfo() const
{
	cout << "Title : " << title << endl;
	cout << "Author : " << author << endl;
	cout << "Pages : " << pages << endl;
	cout << "Year : " << year << endl;
	cout << "Genre : ";
	switch (genre)
	{
	case None:cout << "None" << endl;break;
	case Fantasy:cout << "Fantasy" << endl;break;
	case Detective:cout << "Detective" << endl;	break;
	case Mistery:cout << "Mistery" << endl;	break;
	case Horror:cout << "Horror" << endl;break;
	case Comedy:cout << "Comedy" << endl;break;
	case Fictions:cout << "Fictions" << endl;break;
	case ComputerScience:cout << "ComputerScience" << endl;break;
	case Science:cout << "Science" << endl;	break;
	case Adventure:cout << "Adventure" << endl;	break;
	}
	cout << "____________________________________________" << endl;
}