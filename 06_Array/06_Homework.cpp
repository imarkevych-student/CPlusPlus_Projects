#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    //Task1

 /*   const int rows = 3;
    const int cols = 4;
    int array[rows][cols] = {
        {1, 0, 3, 4},
        {0, 0, 2, 8},
        {5, 6, 0, 0}
    };

    int zeroCount = 0;  
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    cout << "ʳ������ �������� ��������: " << zeroCount << endl;*/

    // Task 2
    const int rows = 4;
    const int cols = 4;
    int array[rows][cols] = {
        {1, 7, 3, 4},
        {3, 5, 2, 8},
        {5, 6, 9, 3},
        {5, 6, 1, 9}
    };

    int choice;
    int size = 6;
    int maxNum = array[0][0];
   
    cout << "\n����:\n";
    cout << "1. ������� ��� �������� ���������\n";
    cout << "2. ������� �� �������� ���������\n";
    cout << "3. ������� ��� �������� �� ������� ���������\n";
    cout << "4. ������� �� �������� �� ������� ���������\n";
    cout << "5. ������� ��� �� �� �������� �� ������� ���������\n";
    cout << "6. ������� ���� �� ������ �� ����������\n";
    cout << "7. ������� ���� �� ����������\n";
    cout << "8. ������� ������ �� ����������\n";
    cout << "9. ������� ��� ������� ���������\n";
    cout << "10. ������� �� ������� ���������\n";
    cout << "11. �����\n";
    cout << "��� ����: ";
    cin >> choice;

    switch (choice) {
    case 1:

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i < j)
                {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }                
        }
        break;
    case 2:
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i >= j) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }                
        }
        break;
    case 3:
        for (int i = 0; i < size + 1; i++) {
            for (int j = 0; j < size + 1; j++) {
                if (i <= j && (i + j <= size)) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }
        }
        break;
    case 4:
        for (int i = 0; i < size + 1; i++) {
            for (int j = 0; j < size + 1; j++) {
                if ((i >= j) && (i + j > size - 1)) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }
        }
        break;
    case 5:
        for (int i = 0; i < size + 1; i++) {
            for (int j = 0; j < size + 1; j++) {
                if (i <= j && (i + j <= size) || ((i >= j) && (i + j >= size))) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }
        }
        break;
    case 6:
        for (int i = 0; i < size + 1; i++) {
            for (int j = 0; j < size + 1; j++) {
                if (!(i <= j && (i + j <= size)) && !((i >= j) && (i + j >= size))) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }
        }
        break;
    case 7:
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (!((i <= j) || (i + j >= size))) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }
        }
        break;
    case 8:
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (!(!(i <= j) || !(i + j >= size))) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }
        }
        break;
    case 9:
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i + j < size) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }
        }
        break;
    case 10:
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i + j >= size - 1) {
                    if (array[i][j] > maxNum)
                        maxNum = array[i][j];
                }
            }
        }
        break;
    case 11:
        cout << "�� ���������!\n";
        break;
    default:
        cout << "������� ����, ��������� �� ���.\n";
    }
  
    cout << "������������ ������� �������: " << maxNum;

}