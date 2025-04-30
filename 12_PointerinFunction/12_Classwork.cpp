#include <iostream>
#include <Windows.h>
using namespace std;

/*�������� 1. �������������� ��������� � ��������
������������, ��������� �������� � ���� �����.

�������� 2. �������������� ��������� � �������� ��� -
���������, ��������� ���� �����, ��������� � ���������.

�������� 3. �������������� ��������� � �������� ��� -
����������, ������� ������ �������� ���� ������.

�������� 4. �������� ���������� �����������, ���� -
�������� ����� �����������.

�������� 5. �������������� �������� �� ����� �����
�����, ���������� ���� �������� ������.����������� -
���� � ������� ���������� ��������� ��� ����������
�� ������, � ����� �������� ������������.*/

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
        cout << "�������: ������ �� ����!\n";
    }
}

void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    // Task 01
    int a, b;
    cout << "������ ��� �����:";
    cin >> a >> b;
    cout << "Max = " << *FindMax(&a, &b) << endl;


    //Task 02
    int c;
    cout << "������ �����:";
    cin >> c;
    isNegative(&c);

    // Task 03
    int x, y;
    cout << "������ ��� �����:";
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
        cout << "\n������� �����������:\n";
        cout << "1. ������ (+)\n";
        cout << "2. ³����� (-)\n";
        cout << "3. ������� (*)\n";
        cout << "4. ĳ���� (/)\n";
        cout << "5. �����\n";
        cout << "��� ����: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "������ ����� �����: ";
            cin >> *pNum1;
            cout << "������ ����� �����: ";
            cin >> *pNum2;
        }

        switch (choice) {
        case 1:
            add(pNum1, pNum2, pResult);
            cout << "���������: " << *pResult << endl;
            break;
        case 2:
            subtract(pNum1, pNum2, pResult);
            cout << "���������: " << *pResult << endl;
            break;
        case 3:
            multiply(pNum1, pNum2, pResult);
            cout << "���������: " << *pResult << endl;
            break;
        case 4:
            divide(pNum1, pNum2, pResult);
            if (*pNum2 != 0) {
                cout << "���������: " << *pResult << endl;
            }
            break;
        case 5:
            cout << "�� ���������!\n";
            break;
        default:
            cout << "������� ����, ��������� �� ���.\n";
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

    cout << "���� �������� ������: " << sum << endl;
}