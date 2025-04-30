#include <iostream>
#include <Windows.h>
using namespace std;

//Завдання 1. Використовуючи два покажчики на масив цілих чисел, скопіювати один масив в інший.Використовувати в програмі арифметику покажчиків для просування масивом, а також оператор розіменування.
void copyArray(int* source, int* destination, int size) {
	for (int i = 0; i < size; i++) {
		*(destination + i) = *(source + i);
	}
}

//Завдання 2. Використовуючи покажчик на масив цілих чисел, змінити порядок проходження елементів масиву на протилежний. Використовувати в програмі арифметику покажчиків для просування масивом, а також оператор розіменування.
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

//Завдання 3. Використовуючи два покажчики на масиви цілих чисел, скопіювати один масив в інший так, щоб у другому масиві елементи перебували у зворотному порядку. Використовувати в програмі арифметику покажчиків для просування масивом, а також оператор розіменування.

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


