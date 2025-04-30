#pragma once
#include <string>
#include <iostream>
using namespace std;
/*
* * Genre :
* const int None      0
* Fantasy   1
* Detective 2
* Mistery   3
* Horror    4
* Comedy    5
* Fictions  6
* Computer Science 7
* Science   8
*/
enum Genre {
	None, Fantasy, Detective, Mistery, Horror, Comedy, Fictions, ComputerScience,
	Science, Adventure
};
class Book
{
	string title;
	string author;
	Genre genre;
	int pages;
	int year;
public:
	Book();//prototype
	Book(string t, string a, Genre g, int p, int y) :title(t), author(a), genre(g),
		pages(p), year(y) {
	}
	void ShowInfo()const;


};