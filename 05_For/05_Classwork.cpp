//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	//Завдання 1. Вивести на екран усі числа від нуля до введеного користувачем числа.
//
//	/*int length;
//	cout << "Введіть число: ";
//	cin >> length;
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << i << " ";
//	}*/
//
//	/*Завдання 2. Користувач вводить дві межі діапазону, вивести на екран усі числа з цього діапазону. Передбачити,
//	щоб користувач міг вводити межі діапазону в довільному 	порядку.
//		■■ вивести всі парні числа з діапазону.
//		■■ вивести всі непарні числа з діапазону.
//		■■ вивести всі числа, кратні семи.*/
//
//	/*int num1, num2, startRange, endRange;
//	cout << "Введіть перше число: ";
//	cin >> num1;
//	cout << "Введіть друге число: ";
//	cin >> num2;
//	if (num1 < num2)
//	{
//		startRange = num1;
//		endRange = num2;
//	}
//	else
//	{
//		startRange = num2;
//		endRange = num1;
//	}
//
//	for (int i = startRange; i < endRange; i++)
//	{
//		if (i % 2 == 0)
//			cout << i << " ";
//	}
//
//	cout << endl;
//
//	for (int i = startRange; i < endRange; i++)
//	{
//		if (i % 2 != 0)
//			cout << i << " ";
//	}
//
//	cout << endl;
//	
//	for (int i = startRange; i < endRange; i++)
//	{
//		if (i % 7 == 0)
//			cout << i << " ";
//	}*/
//
//	//Завдання 3. Користувач вводить дві межі діапазону.Порахувати суму всіх чисел діапазону.
//
//	/*int num1, num2, startRange, endRange,sum = 0;
//	cout << "Введіть перше число: ";
//	cin >> num1;
//	cout << "Введіть друге число: ";
//	cin >> num2;
//	if (num1 < num2)
//	{
//		startRange = num1;
//		endRange = num2;
//	}
//	else
//	{
//		startRange = num2;
//		endRange = num1;
//	}
//
//	for (int i = startRange; i < endRange; i++)
//	{
//		sum += i;		
//	}
//
//	cout << "Summa=" << sum << endl;*/
//	
//	//Завдання 4. Користувач з клавіатури вводить числа.Порахувати їхню суму і вивести на екран, щойно користувач введе нуль.
//	
//	/*int number, sum = 0;
//		for ( ; ; )
//		{
//			cout << "enter number : ";
//			cin >> number;
//			if (number == 0)
//				break;
//			sum += number;
//		}
//	
//	cout << "summa all numbers : " << sum << endl;*/
//
//	/*Завдання 1. Написати гру «Вгадай число».Програма загадує число в діапазоні від 1 до 500. Користувач намагається його вгадати.Після кожної спроби програма
//		видає підказки, чи його число є більшим або меншим за задумане.У кінці програма видає статистику : за скільки спроб угадано число, скільки часу це зайняло.Передба -
//		чити вихід за допомогою 0, у разі, якщо користувачеві набридло вгадувати число.*/	
//
//		int secretNumber = 370; // Задане число
//		int userNum = -1;
//		int sproba = 0;
//				
//		cout << "Вгадай число в діапазоні від 1 до 500." << endl;
//		cout << "Введи 0, щоб вийти з гри." << endl;
//
//		for (; ;) {
//			cout << "Введіть ваше число: ";
//			cin >> userNum;
//			sproba++;
//
//			if (userNum == 0) {
//				cout << "Вихід" << endl;
//				break;
//			}
//			else if (userNum < secretNumber) {
//				cout << "Ваше число менше" << endl;
//			}
//			else if (userNum > secretNumber) {
//				cout << "Ваше число більше" << endl;
//			}
//			else {
//				cout << "Молодець! Вгадав!" << endl;
//				break;
//			}
//		}
//
//		if (userNum == secretNumber) {
//			cout << "Число спроб: " << sproba  << endl;
//		}
//
//}