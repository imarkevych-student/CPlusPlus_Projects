//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	//1.Оголосити одновимірний масив з 10 елементів типу int. Заповнити його значеннями з клавіатури, вивести на екран та підрахувати добуток елементів масиву
//	/*int dobutok = 1;
//	const int size = 10;
//	int arr[size];
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Введіть елемент масиву: ";
//		cin >> arr[i];
//
//		dobutok *= arr[i];
//	}
//	cout << "Добуток чисел: " << dobutok;*/
//	//2.Оголосити одновимірний масив з 7 елементів типу int. Заповнити його випадковими значеннями в діапазоні[-12.. + 50] та вивести на екран. Підрахувати кількість відємних та додатніх елементів масиву.
//	
//	/*const int size = 7;
//	int countNegative = 0;
//	int countPositive = 0;
//	int arr[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Введіть елемент масиву: ";
//		cin >> arr[i];
//		cout << arr[i] << " ";
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//		if (arr[i] > 0)
//			countPositive++;
//		else
//			countNegative++;
//	}
//	cout << "Count positive elements = " << countPositive << endl;
//	cout << "Count negative elements = " << countNegative << endl;*/
//
//	//3.Оголосити, проініціалізувати початковими значеннями та вивести одновимірний масив з 7 елементів типу long.Визначити суму парних елементів масиву;
//
//	/*const int size = 7;	
//	long summaEven = 0;
//	long arr[size] = {2,4,5,7,8,9,13};
//		
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 == 0)
//			summaEven += arr[i];		
//	}
//	cout << "Summa of positive elements = " << summaEven << endl;*/
//
//	// 4.Утворити одновимірний масив розміром 30. Заповнити його числами, які є степенями 2: (1, 2, 4, 8, 16, 32, ....) Вивести елементи масиву на екран у прямому і оберненому порядку.
//	
//	//const int size = 30;
//	//int arr[size];
//	//
//	//for (int i = 0; i < size; i++)
//	//{
//	//	arr[i] = 2*i;
//	//	cout << arr[i] << " ";
//	//}
//	//cout << endl;
//
//	//for (int i = size-1; i > 0; i--)
//	//{		
//	//	cout << arr[i] << " ";
//	//}
//
//	//5.Дано одновимірний масив.Замінити всі від’ємні елементи їх модулями. if (arr[i] < 0) arr[i] = arr[i] * -1;
//	
//	const int size = 7;
//	long arr[size] = {-2,4,-5,7,8,-9,13 };
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] < 0) 
//			arr[i] = arr[i] * -1;
//
//		cout << arr[i] << " ";
//	}
//}