

/*#include <iostream>
using namespace std;

int main()
{
    /* int start;
     cout << "Enter number : ";
     cin >> start;
     srand(start);*/
     //srand(5);
     //time(0)
     //time(NULL) - функція поверне кількість мілісекунд, що минули з 1 січня 1970 року.
    /* srand(time(NULL));

     //int start =1;
     int a;
     a = rand();//0...32767
     cout << " a = " << a << endl;

     a = rand();
     cout << " a = " << a << endl;

     //0...23
     //2300 % 23 =0 -->  2300/23=100 100*23 = 2300 2300-2300 = 0
     //2301%23 = 1
     //2302 % 23 = 2

     //0...5
     //25%5 = 0
     // //26%5 = 1
     //36%5 = 1
     //42%5 = 2
     //50%5 = 0
     //54%5 = 4
     //55%5 = 0
     //ЧИСЛО В ДІАПАЗОНІ ВІД НУЛЯ ДО Х: rand() % X
     for (int i = 0; i < 5; i++)
     {
         a = rand() % 23;///0...22
         cout << " a = " << a << endl;
     }
     for (int i = 0; i < 5; i++)
     {
         a = rand() % 100;///0...99
         cout << " a = " << a << endl;
     }
     for (int i = 0; i < 5; i++)
     {
         a = rand() % 5;///0...4
         cout << " a = " << a << endl;
     }
     //ЧИСЛО В ДІАПАЗОНІ ВІД Х  ДО Y :  rand() % (Y - X) + X
     //11....16
     for (int i = 0; i < 5; i++)
     {
         a = rand() % (16-11) + 11;///0...4
         cout << " a = " << a << endl;
     }
     */
     /*
     srand(time(NULL));

     const int size = 10;
     int arr[size];

     for (int i = 0; i < size; i++)
     {
         arr[i] = rand() %80 - 40;//-40.....40
         cout<<arr[i]<<" ";
     }
     cout << endl;

     const int row = 14;
     const int col = 16;
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
     cout << endl;

     //1. Ініціалізація при створенні
     int array2[2][2] = { {1,2},{3,4} };
     for (int i = 0; i < 2; i++)
     {
         for (int j = 0; j < 2; j++)
         {
             cout << array2[i][j] << " ";
         }
         cout << endl;
     }
     cout << endl;

     int array3[3][3] = { 1,2,3,4,5,6,7,8,9 };
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             cout << array3[i][j] << " ";
         }
         cout << endl;
     }
     cout << endl;


     int array4[3][3] = { {7,8},{11,12,13} };
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             cout << array4[i][j] << " ";
         }
         cout << endl;
     }
     cout << endl;
     */
     //Написати програму, яка у двовимірному масиві зна -
     //ходить максимальний елемент кожного рядка.
  /*  srand(time(NULL));
    const int row = 4;
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
    int max;
    for (int i = 0; i < row; i++)
    {
        max = array[i][0];
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
        cout << "Max element in row " << i << " " << max << endl;

    }
}*/