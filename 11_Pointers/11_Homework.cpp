#include <iostream>
#include <Windows.h>
using namespace std;

void main() {
   	SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //1.Дано три числа. Оголосити вказівники на ці числа. Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них, користуючись непрямим доступом до чисел(через вказівники).
    /*int a, b, c;
    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrC = &c;

    int dobutok = (*ptrA) * (*ptrB) * (*ptrC);
    double average = static_cast<double>((*ptrA + *ptrB + *ptrC)) / 3;
    int minNum = *ptrA;
    if (*ptrB < minNum) minNum = *ptrB;
    if (*ptrC < minNum) minNum = *ptrC;

    cout << "Добуток: " << dobutok << endl;
    cout << "Середнє арифметичне: " << average << endl;
    cout << "Найменше число: " << minNum << endl;*/
    // 2.Дано цілочисельний одновимірний масив. Заповнити його, вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників. 
    /*const int size = 5;
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент масиву: ";
        cin >> arr[i];
    }

    int* ptr = arr;
    cout << "Прямий порядок: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << "\nЗворотний порядок: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }
    cout << "\nСума елементів: " << sum << endl;*/

    //3.Дано одновимірний масив. Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями.Вивести перетворений масив на екран.
    /*const int size = 5;
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент масиву: ";
        cin >> arr[i];
    }
    int* ptr = arr;
    int* maxPtr = &arr[0];
    int* minPtr = &arr[0];

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > *maxPtr) maxPtr = ptr + i;
        if (*(ptr + i) < *minPtr) minPtr = ptr + i;
    }

    swap(*maxPtr, *minPtr);

    cout << "Масив після обміну: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;*/
    //4.Дано масив цілих чисел. Користуючись вказівниками, поміняти місцями елементи масиву з парними и непарними індексами(тобто ті елементи масиву, які стоять на парних місцях, поміняти з елементами, які стоять на непарних місцях).
    const int size = 6;
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент масиву: ";
        cin >> arr[i];
    }

    int* ptr = arr;
    for (int i = 0; i < size - 1; i += 2) {
        swap(*(ptr + i), *(ptr + i + 1));
    }

    cout << "Модифікований масив: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

}
