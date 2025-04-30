#include <iostream>
#include <Windows.h>
using namespace std;
//Завдання: Створіть функції для обробки чисел :
//void square(int& num) – підносить число до квадрата.
//void doubleValue(int& num) – подвоює число.
//void negate(int& num) – змінює знак числа.
//Оголосіть вказівник на функцію :
//typedef void (*NumberOperation)(int&);
//Створіть функцію void processArray(int arr[], int size, NumberOperation op), яка приймає масив чисел і виконує передану операцію над кожним елементом.
//Реалізуйте вибір операції :
//Створіть масив із 5 чисел.
//Запропонуйте користувачеві вибрати одну з трьох операцій(квадрат, подвоєння, зміна знаку).
//Використовуйте processArray для обробки всього масиву.
//Виведіть результати після обробки.

void square(int& num) {
	num *= num;
}

void doubleValue(int& num) {
	num *= 2;
}

void negate(int& num) {
	num = -num;
}

typedef void (*NumberOperation)(int&);

void processArray(int arr[], int size, NumberOperation op) {
	for (int i = 0; i < size; ++i) {
		op(arr[i]);
	}
}

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);    
    int arr[5] = { 1, -2, 3, -4, 5 };
    
    cout << "Вихідний масив: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }

    cout << "\nОберіть операцію для обробки масива:\n";
    cout << "1. Піднесення до квадрата\n";
    cout << "2. Подвоєння\n";
    cout << "3. Зміна знаку\n";

    int choice;
    cin >> choice;

    NumberOperation op = nullptr;

    switch (choice) {
    case 1:
        op = square;
        break;
    case 2:
        op = doubleValue;
        break;
    case 3:
        op = negate;
        break;
    default:
        cout << "Невірний вибір!" << endl;
        return;
    }
   
    processArray(arr, 5, op);
  
    cout << "Результат обробки масиву: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}