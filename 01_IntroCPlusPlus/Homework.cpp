#include<iostream>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/*const float inch = 2.54;
	float diagonalInInch;
	cout << "Enter diagonal in inch:";
	cin >> diagonalInInch;
	cout << "Length of diagonal in cm = " << inch * diagonalInInch;const float inch = 2.54;*/

	/*float kormPerDay;

	cout << "Enter korm per day in gramm:";
	cin >> kormPerDay;
	cout << "Count of korm = " << kormPerDay * 30 / 1000;*/

	//1.Введіть три числа і виведіть на екран їх значення та значення суми цих чисел.
	/*float a, b, c;
	cout << "Введіть три числа: ";
	cin >> a >> b >> c;

	float sum = a + b + c;
	
	cout << "Введені числа: " << a << ", " << b << ", " << c << endl;
	cout << "Сума чисел: " << sum << endl;*/

	//2.Напишіть програму, яка обраховує середнє арифметичне двох чисел.
	/*float a, b;
	cout << "Введіть два числа: ";
	cin >> a >> b ;

	float avg = (a + b)/2;

	cout << "Введені числа: " << a << ", " << b << endl;
	cout << "Середнє арифметичне чисел: " << avg << endl;*/

	//3.Напишіть програму, яка переводить кілометри в метри.Кілометри вводяться з клавіатури.

	/*float km;
	cout << "Введіть кількість кілометрів: ";
	cin >> km ;

	float meters = km * 1000;

	cout << "Кілометри: " << km << endl;
	cout << "Метри: " << meters << " meters"  << endl;*/

	//4.Ви купили в магазині 4 різні товари.Дані ціни кожного товару(константні значення) та кількість товару, який був придбаний. Обрахувати та вивести вартість покупки.
	
	/*const double price1 = 10.5;
	const double price2 = 20.0;
	const double price3 = 15.75;
	const double price4 = 8.25;

	int quantity1, quantity2, quantity3, quantity4;

	cout << "Введіть кількість товару 1: ";
	cin >> quantity1;
	cout << "Введіть кількість товару 2: ";
	cin >> quantity2;
	cout << "Введіть кількість товару 3: ";
	cin >> quantity3;
	cout << "Введіть кількість товару 4: ";
	cin >> quantity4;

	double totalCost = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3) + (price4 * quantity4);

	cout << "Вартість покупки: " << totalCost << " грн" << endl;*/

	//5.Напишіть програму, яка обраховує квадрат довільного введеного числа
	//double number;

	//cout << "Введіть число: ";
	//cin >> number;

	//double res = number * number;

	//cout << "Квадрат числа: " << res << endl;

	//6.Написати програму, яка переводить дні в хвилини.Дні вводяться з клавіатури.Використати хоч би одну константу!!!

	const int MINUTES_IN_DAY = 24*60;

	int days;

	cout << "Введіть кількість днів: ";
	cin >> days;

	int minutes = days * MINUTES_IN_DAY;

	cout << "Кількість хвилин: " << minutes << endl;
}