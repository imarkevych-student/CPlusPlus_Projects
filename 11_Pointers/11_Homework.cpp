#include <iostream>
#include <Windows.h>
using namespace std;

void main() {
   	SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //1.���� ��� �����. ��������� ��������� �� �� �����. �������� ������� ����� ������� �����, ����� �����������, �������� � ���, ������������ �������� �������� �� �����(����� ���������).
    /*int a, b, c;
    cout << "������ ��� �����: ";
    cin >> a >> b >> c;

    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrC = &c;

    int dobutok = (*ptrA) * (*ptrB) * (*ptrC);
    double average = static_cast<double>((*ptrA + *ptrB + *ptrC)) / 3;
    int minNum = *ptrA;
    if (*ptrB < minNum) minNum = *ptrB;
    if (*ptrC < minNum) minNum = *ptrC;

    cout << "�������: " << dobutok << endl;
    cout << "������ �����������: " << average << endl;
    cout << "�������� �����: " << minNum << endl;*/
    // 2.���� ������������� ����������� �����. ��������� ����, ������� �� ����� � ������� �� ����������� ������� �� ���������� ���� �������� � ������������� ���������. 
    /*const int size = 5;
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cout << "������ ������� ������: ";
        cin >> arr[i];
    }

    int* ptr = arr;
    cout << "������ �������: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << "\n��������� �������: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }
    cout << "\n���� ��������: " << sum << endl;*/

    //3.���� ����������� �����. ������ �������� �� �������� �������� � ����� �� ������� �� � ����� ������.������� ������������ ����� �� �����.
    /*const int size = 5;
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cout << "������ ������� ������: ";
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

    cout << "����� ���� �����: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;*/
    //4.���� ����� ����� �����. ������������ �����������, ������� ������ �������� ������ � ������� � ��������� ���������(����� � �������� ������, �� ������ �� ������ �����, ������� � ����������, �� ������ �� �������� �����).
    const int size = 6;
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cout << "������ ������� ������: ";
        cin >> arr[i];
    }

    int* ptr = arr;
    for (int i = 0; i < size - 1; i += 2) {
        swap(*(ptr + i), *(ptr + i + 1));
    }

    cout << "������������� �����: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

}
