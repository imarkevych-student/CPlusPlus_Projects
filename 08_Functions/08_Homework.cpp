#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int countPositive(const int array[], int size);
int countNegative(const int array[], int size);
int countZero(const int array[], int size);
template <typename T>
void initializeMatrix(T matrix[5][5], int size);
template <typename T>
void printMatrix(T matrix[5][5], int size);
template <typename T>
void findMinMaxDiagonal(T matrix[5][5], int size, int& minElem, int& maxElem);
template <typename T>
void sortRows(T matrix[5][5], int size);

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));
   
    //�������� 1.   
    int intArray[] = { 3, 8, -10, 0, -5 };
    int size = sizeof(intArray) / sizeof(intArray[0]);
    cout << "ʳ������ ���������� ��������: " << countPositive(intArray, size) << endl;
    cout << "ʳ������ ���������� ��������: " << countNegative(intArray, size) << endl;
    cout << "ʳ������ �������� ��������: " << countZero(intArray, size) << endl;

    //�������� 2
    size = 5;
    int matrix[5][5];
    
    initializeMatrix(matrix, size);

    cout << "��������� �������:\n";
    printMatrix(matrix, size);
    
    int minElem, maxElem;
    findMinMaxDiagonal(matrix, size, minElem, maxElem);
    cout << "̳�������� ������� �� �������: " << minElem << endl;
    cout << "������������ ������� �� �������: " << maxElem << endl;
   
    sortRows(matrix, size);
    cout << "³���������� �������:\n";
    printMatrix(matrix, size);
}



//�������� 1. �������� �������, �� ���������� ������� ��������, ��'����� � �������� �������� ���������� �� ������.

int countPositive(const int array[], int size) 
{
    int positiveCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            positiveCount++;
        }
    }
    return positiveCount;
}

int countNegative(const int array[], int size) 
{
    int negativeCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            negativeCount++;
        }
    }
    return negativeCount;
}

int countZero(const int array[], int size) 
{
    int zeroCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            zeroCount++;
        }
    }
    return zeroCount;
}

//�������� 2. �������� 2. �������� ������������ ������� (int, double, char) ��� ��������� ����� ������� :

template <typename T>
void initializeMatrix(T matrix[5][5], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 90 + 10;
        }
    }
}

template <typename T>
void printMatrix(T matrix[5][5], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template <typename T>
void findMinMaxDiagonal(T matrix[5][5], int size, int& minElem, int& maxElem) {
    minElem = matrix[0][0];
    maxElem = matrix[0][0];
    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] < minElem) {
            minElem = matrix[i][i];
        }
        if (matrix[i][i] > maxElem) {
            maxElem = matrix[i][i];
        }
    }
}

template <typename T>
void sortRows(T matrix[5][5], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            for (int k = 0; k < size - j - 1; ++k) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}