#include <iostream>
#include <Windows.h>
using namespace std;

//1.Реалізуйте перевантажені функції для
//■ Знаходження максимального значення двох цілих;
//■ Знаходження максимального значення трьох цілих.
//■ Знаходження мінімального значення двох цілих;
//■ Знаходження мінімального значення трьох цілих.
//
//
//1. Написати шаблон функції для пошуку середнього
//арифметичного значення масиву.
//
//2.Написати шаблонні функції і протестувати їх в ос -
//новній програмі :
//
//■ Знаходження максимального значення в однови -
//мірному масиві;
//■ Знаходження максимального значення у двовимір -
//ному масиві;
int maxNum(int a, int b);
int maxNum(int a, int b, int c);
int minNum(int a, int b);
int minNum(int a, int b, int c);
template <typename T> 
T average(T arr[], int size);

template <typename T>
T findMax(T arr[], int size);



void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //Завдання 1.1
    int num1, num2, num3;
    cout << "Введіть число: ";
    cin >> num1;
    cout << "Введіть число: ";
    cin >> num2;
    cout << "Введіть число: ";
    cin >> num3;
    
    cout << "Максимальне серед двох чисел: " << maxNum(num1, num2) << endl;
    cout << "Максимальне серед трьох чисел: " << maxNum(num1, num2, num3) << endl;
    
    //Завдання 1.2
    int num1_1, num2_1, num3_1;
    cout << "Введіть число: ";
    cin >> num1_1;
    cout << "Введіть число: ";
    cin >> num2_1;
    cout << "Введіть число: ";
    cin >> num3_1;
    
    
    cout << "Мінімальне серед двох чисел: " << minNum(num1_1, num2_1) << endl;
    cout << "Мінімальне серед трьох чисел: " << minNum(num1_1, num2_1, num3_1) << endl;


    //Завдання 2.
    int intArray[] = { 3, 8, 10, 9, 5 };
    double doubleArray[] = { 1.6, 7.1, 9.9, 4.4, 9.5 };    

    cout << "Average of intArray: " << average(intArray, 5) << endl;
    cout << "Average of doubleArray: " << average(doubleArray, 5) << endl;
    
    cout << "Max of intArray: " << findMax(intArray, 5) << endl;
    cout << "Max of doubleArray: " << findMax(doubleArray, 5) << endl;



}
//1.Реалізуйте перевантажені функції для
//■ Знаходження максимального значення двох цілих;
//■ Знаходження максимального значення трьох цілих.

int maxNum(int a, int b) {
    return (a > b) ? a : b;
}

int maxNum(int a, int b, int c) 
{
    int max_value = a;

    if (b > max_value) {
        max_value = b;
    }
    if (c > max_value) {
        max_value = c;
    }

    return max_value;
}

//1.Реалізуйте перевантажені функції для
//■ Знаходження мінімального значення двох цілих;
//■ Знаходження мінімального значення трьох цілих.

int minNum(int a, int b) {
    return (a < b) ? a : b;
}

int minNum(int a, int b, int c)
{
    int min_value = a;

    if (b < min_value) {
        min_value = b;
    }
    if (c < min_value) {
        min_value = c;
    }

    return min_value;
}

//2. Написати шаблон функції для пошуку середнього арифметичного значення масиву.
template <typename T>
T average(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

//2.Написати шаблонні функції і протестувати їх в основній програмі :
//■ Знаходження максимального значення в одновимірному масиві;
//■ Знаходження максимального значення у двовимірному масиві;

template <typename T>
T findMax(T arr[], int size) {
    T max_value = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    return max_value;
}