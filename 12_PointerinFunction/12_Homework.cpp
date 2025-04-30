#include <iostream>
#include <Windows.h>
using namespace std;

/*#include <iostream>
#include <Windows.h>
using namespace std;

/*1.���� ��� �����. ��������� ������ �� �� �����. 
�������� ������� ����� ������� �����, ����� �����������, �������� � ���, 
������������ �������� �������� �� ����� (����� ������)

2.�������� �������, ��� ������ �� �䒺�� �������� ���������� ������ ������. (pointers)

3.�������� ������� (��� ������), ��� ������ �� ������ �� ���� � 
������ ���� �������. �� ��������� �������� ������� ������� ������ 
� ������� ������ �� ������ �������.*/

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

    cout << "�������: " << dobutok << endl;
    cout << "������ �����������: " << average << endl;
    cout << "��������: " << minValue << endl;



    //Task 02
    int arr[] = { -1, 2, -3, 4, -5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    replaceNegativesWithZero(arr, size);

    cout << "������������� �����: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

