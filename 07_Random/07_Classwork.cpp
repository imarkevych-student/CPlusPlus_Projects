#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    srand(time(NULL));
    
    //1.Дано масив розміром 4×3 з елементами цілого типу. Визначити кількість елементів відмінних від нуля.
   /* const int row = 4;
    const int col = 3;
    int array[row][col] = {};
    int count=0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 90 + 10;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max;
    for (int i = 0; i < row; i++)
    {        
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] != 0)
            {
                count++;
            }
        }        

    }
    cout << "Count of non zero elements:" << count << endl;*/

    //2.Дано масив розміром 3×3 з елементами цілого типу. Визначити кількість елементів які б дорівнювали нулю.
    /*const int row = 3;
    const int col = 3;
    int array[row][col] = {};
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 90 + 10;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] == 0)
            {
                count++;
            }
        }

    }
    cout << "Count of zero elements:" << count << endl;*/

    //3. Дано масив розміром 7×3 з елементами цілого типу. Визначити кількість елементів, модуль яких менший 12. (-20 + rand() % 40)

    /*const int row = 7;
    const int col = 3;
    int array[row][col] = {};
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = ( - 20 + rand() % 40);
            cout << setw(4) << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((array[i][j] > 0) && (array[i][j] < 12) || (array[i][j] < 0) && (-1*array[i][j] < 12))
            {
                count++;
            }
        }

    }
    cout << "Count of elements less of ||12||:" << count << endl;*/

    //4.Дано масив розміром 4×5 з елементами цілого типу(позитивні та від’ємні). Визначити кількість позитивних елементів.

    /*const int row = 4;
    const int col = 5;
    int array[row][col] = {};
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = (-20 + rand() % 40);
            cout << setw(4) << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > 0)
            {
                count++;
            }
        }
    }
    cout << "Count of positive elements:" << count << endl;*/

    //5.Дано масив розміром 5×4 з елементами дійсного типу(додатні та від’ємні). Визначити добуток всіх додатніх елементів.

    /*const int row = 4;
    const int col = 5;
    int array[row][col] = {};
    long dobutok=1;
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = (-20 + rand() % 40);
            cout << setw(4) << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > 0)
            {
                dobutok*= array[i][j];
            }
        }
    }
    cout << "Dobutok:" << dobutok << endl;*/

    //6. Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні). Визначити добуток всіх від’ємних елементів.
    /*const int row = 4;
    const int col = 5;
    float array[row][col] = {};
    long dobutok = 1;
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = (-20.5 + rand() % 40);
            cout << setw(4) << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] < 0)
            {
                dobutok *= array[i][j];
            }
        }
    }
    cout << "Dobutok:" << dobutok << endl;*/

    //7.Дано масив розміром 4×4 з елементами цілого типу.Визначити кількість елементів, які б при діленні на 6 давали залишок 1. 13 % 6 = 1
    /*const int row = 4;
    const int col = 4;
    int array[row][col] = {};
    long dobutok=1;
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = (rand() % 40);
            cout << setw(4) << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] % 6 == 1)
            {
                count++;
            }
        }
    }
    cout << "Count of numbers:" << count << endl;*/

    //8.Дано масив розміром 5хб цілого типу.Знайти мінімальний елемент.
    //9.Дано масив розміром 5×6 цілого типу.Знайти максимальний елемент.

    /*const int row = 5;
    const int col = 6;
    int array[row][col] = {};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 90 + 10;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max, min;
    max = array[0][0];;
    min = array[0][0];;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
            }
        }        
    }
    cout << "Max element in table " << max << endl;
    cout << "Min element in table " << min << endl;*/

    // 10.Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні). Визначити суму всіх від’ємних елементів.

    const int row = 5;
    const int col = 4;
    float array[row][col] = {};
    long suma = 1;
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = (-20.5 + rand() % 40);
            cout << setw(4) << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] < 0)
            {
                suma += array[i][j];
            }
        }
    }
    cout << "Summa:" << suma << endl;
}