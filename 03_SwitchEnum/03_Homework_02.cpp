#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // 1.Вивести на екран цілі числа від 14 до 123. - while
    /* int i = 14;
     while (i >=14 && i <=123)
     {
         cout << i << " ";
         i++;
     }
     cout << endl;*/

     //2. Вивести на екран додатні непарні числа, які не перевищують 100.
     /*int i = 0;
     while (i >=0 && i <=100)
     {
         if ( i % 3 == 0 && i > 0)
         { 
             cout << i << " ";
         }        
         i++;
     }
     cout << endl;*/

     //3.Дано N (N>0). Вводяться N чисел. Знайти кількість від’ємних серед них. - while
     //int N = 0;
     //int num,countNegNum = 0;
     //cout << "Введіть кількість чисел:";
     //cin >> N;

     //int i = 0;
     //while (i >=0 && i <=N)
     //{
     //    cout << "Введіть число:";
     //    cin >> num;
     //    //cout << endl;
     //    if (num < 0)
     //        countNegNum ++;
     //    i++;
     //}
     //cout << "Кількість негативних чисел: " << countNegNum << endl;

     //4.Вводяться 8 чисел. Знайти добуток та середнє арифметичне цих чисел. - while
     /*int N = 8;
     int num;
     float suma,dobutok;


     int i = 0;
     while (i <=N)
     {
         cout << "Введіть число:";
         cin >> num;
         cout << endl;
         dobutok *= num;
         suma += num;
         i++;
     }
     cout << "Середнє арифметичне чисел: " << suma/N << endl;
     cout << "Добуток чисел: " << dobutok << endl;*/

     //5.Вивести на екран цілі непарні  числа : 100 98 96 94...4  2 1. - do..while
    /* int i=100;
     do
     {
      if (i % 2 == 0)
         cout << i << " ";
      i--;
     } while (i >= 1);

     cout << endl; */

     //6.Написати програму яка обчислює добуток п’яти чисел, які вводяться з клавіатури. - do..while
    /* int N = 5;
     int num, dobutok;
     int i=N;
     do
     {
         cout << "Введіть число:";
         cin >> num;
         cout << endl;
         dobutok *= num;
         i--;

     } while (i >= 1);

     cout << "Добуток чисел чисел: " << dobutok << endl;*/

}
