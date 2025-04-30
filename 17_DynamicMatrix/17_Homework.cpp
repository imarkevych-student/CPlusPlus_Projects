#include <iostream>
#include <Windows.h>
using namespace std;



void InitMatrixViaRandomValue(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }
    cout << endl;
}


void ShowMatrix(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
// Завдання 1. Написати функцію, що додає стовпчик двовимірному масиву в зазначену позицію.
void addColumn(int**& array, int rows, int& cols, int position, int* newColumn) {
    if (position < 0 || position > cols) {
        cout << "Invalid column position!" << endl;
        return;
    }

    int** newArray = new int* [rows];
    for (int i = 0; i < rows; i++) {
        newArray[i] = new int[cols + 1];
        int k = 0;
        for (int j = 0; j < cols + 1; j++) {
            if (j == position) {
                newArray[i][j] = newColumn[i];
            }
            else {
                newArray[i][j] = array[i][k++];
            }
        }
    }
    
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    array = newArray; 
    cols++;
}

//Завдання 2. Написати функцію, що видаляє стовпчик двовимірного масиву за вказаним номером.

void removeColumn(int** matrix, int rows, int cols, int colToRemove) {
    for (int i = 0; i < rows; i++) {
        for (int j = colToRemove; j < cols - 1; j++) {
            matrix[i][j] = matrix[i][j + 1]; 
        }
    }
}

// Завдання 3 Дано матрицю порядку MxN(M рядків, N стовпців).Необхідно заповнити її значеннями і написати функцію, що здійснює циклічний зсув рядків та / або стовпчиків масиву вказану кількість разів і в зазначену сторону.

void shiftRows(int** matrix, int rows, int cols, int shifts, bool toRight) {
    shifts %= cols; 
    if (!toRight) shifts = cols - shifts; 

    for (int i = 0; i < rows; i++) {
        int* temp = new int[cols];
        for (int j = 0; j < cols; j++) {
            temp[(j + shifts) % cols] = matrix[i][j];
        }
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = temp[j];
        }
        delete[] temp;
    }
}

void shiftColumns(int** matrix, int rows, int cols, int shifts, bool toDown) {
    shifts %= rows; 
    if (!toDown) shifts = rows - shifts; 

    for (int j = 0; j < cols; j++) {
        int* temp = new int[rows];
        for (int i = 0; i < rows; i++) {
            temp[(i + shifts) % rows] = matrix[i][j];
        }
        for (int i = 0; i < rows; i++) {
            matrix[i][j] = temp[i];
        }
        delete[] temp;
    }
}

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0));
    
    int rows, cols;
    cout << "Enter count of rows : ";
    cin >> rows;
    cout << "Enter count of cols : ";
    cin >> cols;

    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    InitMatrixViaRandomValue(matrix, rows, cols);
    cout << "Task 01" << endl;
    cout << "Initial Matrix:" << endl;
    ShowMatrix(matrix, rows, cols);

    int* newColumn = new int[rows];
    for (int j = 0; j < rows; j++)
    {
        newColumn[j] = rand() % 100;
    }
    cout << "New Column: ";
    for (int j = 0; j < rows; j++)
    {
        cout << newColumn[j] << " ";
    }  
    cout << endl;
    cout << "Task 01" << endl;
    int position;
    cout << "Enter the position to insert the new column (0-based index): ";
    cin >> position;

    addColumn(matrix, rows, cols, position, newColumn);
    cout << "\nMatrix After Adding a New Column to the end of Matrix:" << endl;
    cout << "\nUpdated Array:" << endl;
    ShowMatrix(matrix, rows, cols);
    
    cout << "Task 02" << endl;
    int colToRemove;

    cout << "Введіть номер стовпця для видалення (0-based index): ";
    cin >> colToRemove;

    removeColumn(matrix, rows, cols, colToRemove);
    cols--; 

    cout << "Результат:" << endl;
    ShowMatrix(matrix, rows, cols);
    
    cout << "Task 03" << endl;
    int shifts;
    bool isRowShift, toRightOrDown;

    cout << "Enter the number of shifts: ";
    cin >> shifts;
    cout << "Shift rows (1) or columns (0): ";
    cin >> isRowShift;
    cout << "Shift to the right/down (1) or left/up (0): ";
    cin >> toRightOrDown;

    if (isRowShift) {
        shiftRows(matrix, rows, cols, shifts, toRightOrDown);
    }
    else {
        shiftColumns(matrix, rows, cols, shifts, toRightOrDown);
    }

    cout << "\nResultant matrix:" << endl;
    ShowMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}