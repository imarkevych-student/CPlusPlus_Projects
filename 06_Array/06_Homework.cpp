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

    cout << "Кількість нульових елементів: " << zeroCount << endl;*/

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
   
    cout << "\nМеню:\n";
    cout << "1. Область над головною діагоналлю\n";
    cout << "2. Область під головною діагоналлю\n";
    cout << "3. Область над головною та побічною діагоналлю\n";
    cout << "4. Область під головною та побічною діагоналлю\n";
    cout << "5. Область над та під головною та побічною діагоналлю\n";
    cout << "6. Область зліва та справа від діагоналлей\n";
    cout << "7. Область зліва від діагоналлей\n";
    cout << "8. Область справа від діагоналлей\n";
    cout << "9. Область над побічною діагоналлю\n";
    cout << "10. Область під побічною діагоналлю\n";
    cout << "11. Вийти\n";
    cout << "Ваш вибір: ";
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
        cout << "До побачення!\n";
        break;
    default:
        cout << "Невірний вибір, спробуйте ще раз.\n";
    }
  
    cout << "Максимальний елемент матриці: " << maxNum;

}