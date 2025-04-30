#include <iostream>
#include <Windows.h>
using namespace std;

//�������� 1. �������������� ��� ��������� �� ����� ����� �����, ��������� ���� ����� � �����.��������������� � ������� ���������� ��������� ��� ���������� �������, � ����� �������� ������������.
void copyArray(int* source, int* destination, int size) {
	for (int i = 0; i < size; i++) {
		*(destination + i) = *(source + i);
	}
}

//�������� 2. �������������� �������� �� ����� ����� �����, ������ ������� ����������� �������� ������ �� �����������. ��������������� � ������� ���������� ��������� ��� ���������� �������, � ����� �������� ������������.
void reverseArray(int* array, int size) {
	int* start = array;          
	int* end = array + size - 1; 

	while (start < end) {
		
		int temp = *start;
		*start = *end;
		*end = temp;		
		start++;
		end--;
	}
}

//�������� 3. �������������� ��� ��������� �� ������ ����� �����, ��������� ���� ����� � ����� ���, ��� � ������� ����� �������� ���������� � ���������� �������. ��������������� � ������� ���������� ��������� ��� ���������� �������, � ����� �������� ������������.

void copyArrayReversed(int* source, int* destination, int size) {
	int* sourceEnd = source + size - 1; 

	for (int i = 0; i < size; i++) {
		*(destination + i) = *(sourceEnd - i);
	}
}

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void printArray(string nameArr, int* arr, int size)
{
	cout << nameArr;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));

	//Task 1
	int size;
	cout << "Enter the size of the array 1: ";
	cin >> size;
	

	int* sourceArray = new int[size];
	int* destinationArray = new int[size];

	
	cout << "Task 1\n";
	InitArray(sourceArray, size);
	printArray("Source array: ", sourceArray, size);

    copyArray(sourceArray, destinationArray, size);
    
	printArray("Destination Array:", destinationArray, size);

	//Task 2
	cout << "Task 2\n";
	InitArray(sourceArray, size);
	printArray("Source array: ", sourceArray, size);
	reverseArray(sourceArray, size);
	printArray("Reverse array: ", sourceArray, size);
	
	//Task 3
	cout << "Task 3\n";
	InitArray(sourceArray, size);
	printArray("Source array: ", sourceArray, size);
	copyArrayReversed(sourceArray, destinationArray, size);
	printArray("Destination Array (Reversed): ", destinationArray, size);

   

   
}


