//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*
//	int i = 1;
//	while (i < 11)
//	{
//		cout << i << " ";
//		i++;
//	}
//	cout << endl;
//	//цикл з параметрами
//	//1. Ініціалізація і створення змінної проводиться в циклі.
//	for (int i = 1; i <= 10; i++)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//	//2. Створення змінної проводиться до циклу, а ініціалізація — у циклі.
//	int x;
//	for (x = 0; x <= 10; x += 2)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//	//3. Ініціалізація і створення змінної виконуються до циклу.
//	float y = 0;
//	for ( ; y <= 1; y+= 0.2)
//	{
//		cout << y << " ";
//	}
//	cout << endl;
//
//	//Зміна керуючої змінної
//	for (int i = 0; i < 11; )
//	{
//		cout << i << " ";
//		i++;
//	}
//	cout << endl;
//
//	for (int i = 0;   ; i++)
//	{
//		cout << i << " ";
//		if (i == 6)
//			break;
//
//	}
//	cout << endl;
//	for (int i = 0; i < 26; i++)
//	{
//		/*if (i % 2 != 0) {
//			cout << i << " ";
//		}*/
//		/*
//			if (i % 2 == 0)
//			{
//				continue;
//			}
//			cout << i << " ";
//		}
//		cout << endl;
//
//		int magicNumber = 2;
//		cout << "==========================================" << endl;
//		cout << "My magic number between 1 and 10 " << endl;
//		cout << "==========================================" << endl;
//		int user_number;
//		for (int i = 1; i <= 5; i++)
//		{
//			cout << "Enter your number : ";
//			cin >> user_number;
//			if (user_number == magicNumber)
//			{
//				cout << "Congratulation ...." << endl;
//				break;
//			}
//			else
//			{
//				cout << "That is not my number " << endl;
//			}
//			if (i == 5)
//			{
//				cout << "Try again later " << endl;
//			}
//		}
//		cout << endl;
//
//		int number, sum = 0;
//		for ( ; ; )
//		{
//			cout << "Enter number : ";
//			cin >> number;
//			if (number == 0)break;
//			sum += number;
//		}
//
//		cout << "Summa all numbers : " << sum << endl;
//		*/
//	int size = 10;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i >= j && i + j >= size - 1)
//				cout << "|===|";
//			else
//				cout << "     ";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "|###|";
//		}
//		cout << endl;
//	}
//
//
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cout << " +";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cout << " =";
//		}
//		cout << endl;
//	}
//
//	cout << endl;
//	int N = 9;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (i == j)
//				cout << " =";
//			else
//				cout << " +";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (i + j == N - 1)
//				cout << " =";
//			else
//				cout << " +";
//		}
//		cout << endl;
//	}
//
//
//
//
//
//}
//
