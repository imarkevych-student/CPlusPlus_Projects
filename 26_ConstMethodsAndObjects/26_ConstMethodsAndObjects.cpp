#include <iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;
	const int BaseYear;
public:
	Date(int day, int month, int year, int base) :day(day), month(month),
		year(year), BaseYear(base) {
	}

	void setDate(int day)
	{
		this->day = day;
	}
	/*int getDate()
	{
		return day;
	}*/
	int getDate()const
	{
		return day;
	}
	void Print()const
	{
		cout << day << "/" << month << "/" << year << endl;
		cout << "Base year : " << BaseYear << endl;
	}
};
class Account
{
private:
	double sum;
	const double rate;
public:
	Account(double Rate, double Sum) :rate(Rate)
	{
		//this->rate = Rate; //error
		sum = Sum;
	}
	double getRate() const
	{
		return rate;
	}
	double getIncome()
	{
		return sum * rate / 100;
	}
	double getIncome() const
	{
		return sum * rate / 100;
	}
	double getSum()
	{
		return sum;
	}
	double getSum()const
	{
		return sum;
	}
	double setSum() //const
	{
		sum += getIncome();
		return sum;
	}
};
int main()
{
	Account account1(5, 2000);
	const Account account2(8, 5000);
	cout << account1.getRate() << endl;
	cout << account2.getRate() << endl;
	cout << account1.getSum() << endl;
	cout << account2.getSum() << endl;
	cout << account1.getIncome() << endl;
	cout << account2.getIncome() << endl;
	cout << account1.setSum() << endl;
	//cout<< account2.setSum() << endl;
	/*
	const int size = 3;
	const string s{ "Some string" };

	const char* d{ "Next day" };
	const int days[3] = { 31,31,28 };
	//days[2] = 29;
	int value;
	cout << "Enter base year : "; cin >> value;
	Date eventDay = { 20,4,2025 ,value };
	eventDay.setDate(21);
	eventDay.Print();

	const Date independencyDay = { 24,8,2025,1991 };
	//independencyDay.setDate(4);//error
	cout << independencyDay.getDate() << endl;
	independencyDay.Print();
	*/



}