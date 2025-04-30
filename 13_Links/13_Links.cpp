#include <iostream>
using namespace std;

void ChangeVariable(int& a)//0x1df5sd
{
	a++;
}

int& FindMax(int& a, int& b)
{
	/*if (a > b )
	{
		return a;
	}
	return b;*/
	int c = 122;
	return c;
}

void FillArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void ShowArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
int& FindMax(int* arr, int size)
{
	int max = arr[0];
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > max) {
			max = *(arr + i);//81
			index = i;//5
		}
	}
	return arr[index];//81
}

int main()
{

	srand(time(0));
	const int size = 10;
	int arr[size];
	FillArr(arr, size);
	ShowArr(arr, size);
	int& max = FindMax(arr, size);
	cout << "Max = " << max << endl;
	max = 0;
	ShowArr(arr, size);

	//int a = 10, b = 12;
	//cout << "a = " << a << endl;
	//ChangeVariable(a);
	//cout << "a = " << a << endl;
	//int & lmax = FindMax(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "lmax = " << lmax << endl;
	////lmax = 1;
	//FindMax(a, b) = 1;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;



	//int* pa = &a;
	//int* pa = nullptr;//int* pa = NULL;//int* pa = 0;//int* pa;
	//pa = &a;
	//cout << "pa " << pa << endl;
	//cout << "*pa " << *pa << endl;
	//int b = 7;
	////pa = &b;
	////cout << "*pa " << *pa << endl;
	////ссилка (посилання) links
	//int& la = a;
	//cout << "a " << a << endl;
	//cout << "pa " << pa << endl;
	//cout << "*pa " << *pa << endl;
	//cout << "la " << la << endl;
	//int& lb = b;
	//cout << a + b << endl;
	//cout << la + lb << endl;
	//









}