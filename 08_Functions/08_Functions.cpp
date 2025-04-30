//#include <iostream>
//using namespace std;
//
////1.create function
////2.prototype function
//void Hello()
//{
//	cout << "Hello, world!" << endl;
//}
//
//void Star(int count)
//{
//	Hello();
//	for (int i = 0; i < count; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
//
//void AnyLine(char symbol, int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << symbol;
//	}
//	cout << endl;
//}
//int myPow(int num, int step)//2**5
//{
//	int res = 1;
//	for (int i = 0; i < step; i++)
//	{
//		res *= num;
//	}
//	return res;
//}
//int Max(int a, int b)
//{
//	return (a > b) ? a : b;
//	/*if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}*/
//	//return; ---> break;
//}
//int Min(int a, int b)
//{
//	return (a < b) ? a : b;
//
//}
//void Change(int one, int two)
//{
//	cout << "One : " << one << ". Two : " << two << endl;
//	int temp = one;
//	one = two;
//	two = temp;
//	cout << "One : " << one << ". Two : " << two << endl;
//
//}
//void InitArray(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//}
//void ShowArray(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int SummaArray(int arr[], int size)
//{
//	int summa = 0;
//	for (int i = 0; i < size; i++)
//	{
//		summa += arr[i];
//	}
//	return summa;
//}
//void InitMatrix(int arr[][6], int row, int col);//prototype function 
//void ShowMatrix(int arr[][6], int row, int col);
//
//int A = 99;//gloabal variable
//int B;// B = 0;
//void SetA()
//{
//	A = 1000;
//}
//void ShowA()
//{
//	cout << A << endl;
//}
//void SetSecondA()
//{
//	int A = 11;
//	cout << A << endl;
//}
//
//void StarDefault(int count = 20)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
////void Foo(int i, int j){}
////void Foo(int i, int j = 5){}
////void Foo(int i, int j = 5 , int k){}//error
//void SomeFunction() {
//	//статичну локальну змінну.
//	static int a = 0;
//	a++;
//	cout << a << endl;
//
//}
//int main()
//{
//	SomeFunction();
//
//	SomeFunction();
//	SomeFunction();
//	SomeFunction();
//
//	SomeFunction();
//	SomeFunction();
//	SomeFunction();
//
//	SomeFunction();
//	SomeFunction();
//	/*Foo(5, 8,6 );
//	Foo(5, 8);*/
//
//	StarDefault(5);
//	StarDefault(10);
//	StarDefault();
//	ShowA();
//	SetA();
//	ShowA();
//	SetSecondA();
//	ShowA();
//	int A = 10;
//	cout << A << endl;
//	::A = 333;
//	cout << ::A << endl;
//
//
//	int c;//garbage
//	int a = 5;
//	if (a == 5)
//	{
//		int b = 7;
//		cout << b << endl;
//	}
//	//cout << b << endl;
//
//	/*
//	srand(time(NULL));
//	const int size = 10;
//	int arr[size];
//	InitArray(arr, size);
//	ShowArray(arr, size);
//	cout << "Summa = " << SummaArray(arr, size) << endl;
//
//	const int row = 5;
//	const int col = 6;
//	int matrix[row][col];
//	InitMatrix(matrix, row, col);
//	ShowMatrix(matrix, row, col);
//
//
//	int a = 5, b = 7;
//	cout << "a : " << a << ". b : " << b << endl;
//	Change(a, b);
//	cout << "a : " << a << ". b : " << b << endl;
//
//
//	cout << "Max = " << Max(5, 7) << endl;
//	cout << "Min = " << Min(15, 17) << endl;
//	*/
//	/*Hello();
//	Hello();
//	Hello();
//	Hello();
//	Hello();*/
//	/*Star(5);
//	Star(50);
//	AnyLine('+', 3);
//	AnyLine('=',71);
//
//	cout << "Pow = " << myPow(2, 5) << endl;
//	int pow = myPow(2, 5);
//	cout << "Res = " << pow << endl;*/
//
//
//}
//
////2.create function
//void InitMatrix(int arr[][6], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			arr[i][j] = rand() % 90 + 10;
//		}
//	}
//}void ShowMatrix(int arr[][6], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}