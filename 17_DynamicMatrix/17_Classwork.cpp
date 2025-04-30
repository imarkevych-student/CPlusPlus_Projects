//#include <iostream>
//using namespace std;
//
//
//
//void InitMatrixViaRandomValue(int** matrix, int rows, int cols)
//{   
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            matrix[i][j] = rand() % 100;
//        }
//    }
//    cout << endl;
//}
//
//
//void ShowMatrix(int** matrix, int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//// Завдання 1. Написати функцію, що додає рядок двовимірному масиву в кінець.
//
//int** AddRowToEndOfMatrix(int** matrix, int& rows, int cols, int* newRow)
//{
//    int** newMatrix = new int* [rows + 1];
//    
//    for (int i = 0; i < rows; i++)
//    {
//        newMatrix[i] = matrix[i];
//    }
//    newMatrix[rows] = newRow;
//    rows++;    
//    delete[] matrix;
//
//    return newMatrix;
//
//}
//// Завдання 2. Написати функцію, що додає рядок двовимірному масиву на початок.
//
//int** AddRowToStartOfMatrix(int** matrix, int& rows, int cols, int* newRow)
//{
//    int** newMatrix = new int* [rows + 1];
//
//    newMatrix[0] = newRow;
//    
//    for (int i = 0; i < rows; i++)
//    {
//        newMatrix[i+1] = matrix[i];
//    }   
//    rows++;    
//    delete[] matrix;
//
//    return newMatrix;
//}
//
//// Завдання 3. Написати функцію, що додає рядок двовимірному масиву в зазначену позицію.
//
//int** AddRowToMatrixAtPosition(int** matrix, int& rows, int cols, int* newRow, int position)
//{
//    if (position < 0 || position > rows)
//    {
//        cout << "Invalid position!" << endl;
//        return matrix;
//    }
//
//    int** newMatrix = new int* [rows + 1];
//        
//    for (int i = 0; i < position; i++)
//    {
//        newMatrix[i] = matrix[i];
//    }
//
//   
//    newMatrix[position] = newRow;    
//    for (int i = position; i < rows; i++)
//    {
//        newMatrix[i + 1] = matrix[i];
//    }    
//    rows++;    
//    delete[] matrix;
//    return newMatrix;
//}
//
////Завдання 4. Написати функцію, що видаляє рядок двовимірного масиву за вказаним номером.
//int** DeleteRowFromMatrix(int** matrix, int& rows, int cols, int rowToDelete)
//{
//    if (rowToDelete < 0 || rowToDelete >= rows)
//    {
//        cout << "Invalid row number!" << endl;
//        return matrix;
//    }
//    
//    int** newMatrix = new int* [rows - 1];
//
//    
//    for (int i = 0, k = 0; i < rows; i++)
//    {
//        if (i == rowToDelete) continue; 
//        newMatrix[k++] = matrix[i];
//    }    
//    delete[] matrix;
//
//    rows--;
//    return newMatrix;
//}
//
// void main()
//{
//    srand(time(0));
//    int rows,cols;
//    cout << "Enter count of rows : ";
//    cin >> rows;
//    cout << "Enter count of cols : ";
//    cin >> cols;   
//
//    int** matrix = new int* [rows];
//   
//    for (int i = 0; i < rows; i++)
//    {
//        matrix[i] = new int[cols];
//    }
//    
//    InitMatrixViaRandomValue(matrix, rows, cols);
//
//    cout << "Initial Matrix:" << endl;
//    ShowMatrix(matrix, rows, cols);
//    
//    int* newRow = new int[cols];
//    for (int j = 0; j < cols; j++)
//    {
//        newRow[j] = rand() % 100;
//    }
//    cout << "New Row: ";
//
//    for (int j = 0; j < cols; j++)
//    {
//        cout << newRow[j] << " ";
//    }  
//    cout << endl;
//    // Task 1
//    /*matrix = AddRowToEndOfMatrix(matrix, rows, cols, newRow);    
//    cout << "\nMatrix After Adding a New Row to the end of Matrix:" << endl;
//    ShowMatrix(matrix, rows, cols);*/
//    // Task 2
//   /* matrix = AddRowToStartOfMatrix(matrix, rows, cols, newRow);
//    cout << "\nMatrix After Adding a New Row to start of Matrix:" << endl;
//    ShowMatrix(matrix, rows, cols);*/
//    //Task 3       
//    /*int position;
//    cout << "\nEnter position to insert the new row: ";
//    cin >> position;   
//    matrix = AddRowToMatrixAtPosition(matrix, rows, cols, newRow, position);
//    cout << "\nMatrix After Adding a New Row at Position " << position << ":" << endl;
//    ShowMatrix(matrix, rows, cols);*/
//    // Task 4   
//    int rowToDelete;
//    cout << "\nEnter row number to delete: ";
//    cin >> rowToDelete;    
//    matrix = DeleteRowFromMatrix(matrix, rows, cols, rowToDelete);
//
//    cout << "\nMatrix After Deleting Row " << rowToDelete << ":" << endl;
//    ShowMatrix(matrix, rows, cols);
//
//
//    
//    for (int i = 0; i < rows; i++)
//    {
//        delete[] matrix[i];
//    }
//    delete[] matrix;   
//}