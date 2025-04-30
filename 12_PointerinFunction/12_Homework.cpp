#include <iostream>
#include <Windows.h>
using namespace std;

/*#include <iostream>
#include <Windows.h>
using namespace std;

/*1.Дано три числа. Оголосити ссилки на ці числа. 
Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них, 
користуючись непрямим доступом до чисел (через ссилку)

2.Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями. (pointers)

3.Написать функцію (або шаблон), яка приймає дві ссилки на змінні і 
виконує обмін значень. За допомогою написаної функції поміняти місцями 
у матриці перший та другий стовпці.*/

void calculate(const int& a, const int& b, const int& c, int& dobutok, double& average, int& minValue) {
    dobutok = a * b * c;
    average = (a + b + c) / 3.0;
    minValue = a;
    if (b < minValue) {
        minValue = b;
    }
    if (c < minValue) {
        minValue = c;
    }
}

void replaceNegativesWithZero(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) < 0) {
            *(arr + i) = 0;
        }
    }
}

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Task 01
    int a, b;
    int x = 3, y = 4, z = 5;
    int dobutok, minValue;
    double average;

    calculate(x, y, z, dobutok, average, minValue);

    cout << "Добуток: " << dobutok << endl;
    cout << "Середнє арифметичне: " << average << endl;
    cout << "Найменше: " << minValue << endl;



    //Task 02
    int arr[] = { -1, 2, -3, 4, -5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    replaceNegativesWithZero(arr, size);

    cout << "Модифікований масив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

