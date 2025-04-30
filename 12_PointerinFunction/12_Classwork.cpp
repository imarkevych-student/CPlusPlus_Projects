#include <iostream>
#include <Windows.h>
using namespace std;

/*Завдання 1. Використовуючи покажчики й оператор
розіменування, визначити найбільше з двох чисел.

Завдання 2. Використовуючи покажчики й оператор розі -
менування, визначити знак числа, введеного з клавіатури.

Завдання 3. Використовуючи покажчики й оператор роз -
іменування, поміняти місцями значення двох змінних.

Завдання 4. Написати примітивний калькулятор, кори -
стуючись тільки покажчиками.

Завдання 5. Використовуючи покажчик на масив цілих
чисел, порахувати суму елементів масиву.Використову -
вати в програмі арифметику покажчиків для просування
по масиву, а також оператор розіменування.*/

int* FindMax(int* a, int* b)
{
    if (*a > *b)
    {
        return a;
    }
    else 
        return b;
}

void isNegative(int* c)
{
    *c > 0 ? cout << "Positive" << endl : cout << "Negative" << endl;
}

void swapNum(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp; 
}

void add(double* a, double* b, double* result) {
    *result = *a + *b;
}

void subtract(double* a, double* b, double* result) {
    *result = *a - *b;
}

void multiply(double* a, double* b, double* result) {
    *result = *a * *b;
}

void divide(double* a, double* b, double* result) {
    if (*b != 0) {
        *result = *a / *b;
    }
    else {
        cout << "Помилка: ділення на нуль!\n";
    }
}

void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    // Task 01
    int a, b;
    cout << "Введіть два числа:";
    cin >> a >> b;
    cout << "Max = " << *FindMax(&a, &b) << endl;


    //Task 02
    int c;
    cout << "Введіть число:";
    cin >> c;
    isNegative(&c);

    // Task 03
    int x, y;
    cout << "Введіть два числа:";
    cin >> x >> y;
    cout << "x = " << x << "\ty = " << y << endl;
    swapNum(&x, &y);
    cout << "x = " << x << "\ty = " << y << endl;

    // Task 04
    double num1, num2, result;
    double* pNum1 = &num1;
    double* pNum2 = &num2;
    double* pResult = &result;
    int choice;

    do {
        cout << "\nПростий калькулятор:\n";
        cout << "1. Додати (+)\n";
        cout << "2. Відняти (-)\n";
        cout << "3. Множити (*)\n";
        cout << "4. Ділити (/)\n";
        cout << "5. Вийти\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Введіть перше число: ";
            cin >> *pNum1;
            cout << "Введіть друге число: ";
            cin >> *pNum2;
        }

        switch (choice) {
        case 1:
            add(pNum1, pNum2, pResult);
            cout << "Результат: " << *pResult << endl;
            break;
        case 2:
            subtract(pNum1, pNum2, pResult);
            cout << "Результат: " << *pResult << endl;
            break;
        case 3:
            multiply(pNum1, pNum2, pResult);
            cout << "Результат: " << *pResult << endl;
            break;
        case 4:
            divide(pNum1, pNum2, pResult);
            if (*pNum2 != 0) {
                cout << "Результат: " << *pResult << endl;
            }
            break;
        case 5:
            cout << "До побачення!\n";
            break;
        default:
            cout << "Невірний вибір, спробуйте ще раз.\n";
        }
    } while (choice != 5);

    // task 05
    const int size = 5; 
    int array[size] = { 1, 2, 3, 4, 5 }; 

    int sum = 0;
    int* parr = array; 

    
    for (int i = 0; i < size; i++) 
    {
        sum += *parr; 
        parr++;           
    }

    cout << "Сума елементів масиву: " << sum << endl;
}