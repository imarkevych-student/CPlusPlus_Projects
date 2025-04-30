#include <iostream>
#include <Windows.h>
using namespace std;


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
    for (int i = 0; i < size; i++) {
        op(arr[i]); 
    }
}

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0));

    const int SIZE = 5; 
    int arr[SIZE];

    
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // ���������� ������ ��������
    cout << "Choose an operation:" << endl;
    cout << "1. Square numbers" << endl;
    cout << "2. Double numbers" << endl;
    cout << "3. Negate numbers" << endl;

    int choice;
    cin >> choice;

    // ���� ��������
    NumberOperation op = nullptr;
    if (choice == 1) {
        op = square;
    }
    else if (choice == 2) {
        op = doubleValue;
    }
    else if (choice == 3) {
        op = negate;
    }
    else {
        cout << "Invalid choice!" << endl;
        return 1; // ���������� ��������
    }

    // ������� ������
    processArray(arr, SIZE, op);

    // ��������� ����������
    cout << "Processed array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
}