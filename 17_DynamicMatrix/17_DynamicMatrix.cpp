//#include <iostream>
//using namespace std;
//
//enum Seasons { UP = 87, Spring, Summer, Autumn };
//
//enum { ON, OFF } status;
//
//int main()
//{
//    //int* ptrArray = new int[5];//20 bytes
//    status = OFF;
//    cout << status << endl;
//    cout << "Enter season : " << endl;
//    cout << Seasons::Spring << endl;
//    cout << status << endl;
//
//
//    int choice;
//    cin >> choice;
//    switch (choice)
//    {
//    case UP:
//        cout << "UP" << endl;
//        cout << "Winter" << endl;
//        break;
//    case Spring:
//        cout << "Spring" << endl;
//        break;
//    case Summer:
//        cout << "Summer" << endl;
//        break;
//    case Autumn:
//        cout << "Autumn" << endl;
//        break;
//    default:
//        break;
//    }
//
//    int rows;
//    cout << "Enter count of rows : " << endl;
//    cin >> rows;
//
//    int** array = new int* [rows];
//    //int*** array2 = new int** [rows];
//    int* countCols = new int[rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        int cols;
//        cout << "Enter count of cols for row " << i + 1 << " : ";
//        cin >> cols;
//        array[i] = new int[cols];
//        countCols[i] = cols;
//    }
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < countCols[i]; j++)
//        {
//            cin >> array[i][j];
//        }
//    }
//
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < countCols[i]; j++)
//        {
//            cout << array[i][j] << " ";
//        }
//        cout << "\n";
//    }
//
//
//
//
//    /*for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << "Enter element [" << i + 1 << "][" << j + 1 << "] : ";
//            cin >> array[i][j];
//        }
//    }
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << array[i][j] << " ";
//        }
//        cout << "\n";
//    }*/
//    delete[]countCols;
//
//    for (int i = 0; i < rows; i++)
//    {
//        delete[]array[i];//delete every row
//    }
//    delete[]array;//delete array
//
//}