#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // 1.������� �� ����� ��� ����� �� 14 �� 123. - while
    /* int i = 14;
     while (i >=14 && i <=123)
     {
         cout << i << " ";
         i++;
     }
     cout << endl;*/

     //2. ������� �� ����� ������ ������ �����, �� �� ����������� 100.
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

     //3.���� N (N>0). ��������� N �����. ������ ������� �䒺���� ����� ���. - while
     //int N = 0;
     //int num,countNegNum = 0;
     //cout << "������ ������� �����:";
     //cin >> N;

     //int i = 0;
     //while (i >=0 && i <=N)
     //{
     //    cout << "������ �����:";
     //    cin >> num;
     //    //cout << endl;
     //    if (num < 0)
     //        countNegNum ++;
     //    i++;
     //}
     //cout << "ʳ������ ���������� �����: " << countNegNum << endl;

     //4.��������� 8 �����. ������ ������� �� ������ ����������� ��� �����. - while
     /*int N = 8;
     int num;
     float suma,dobutok;


     int i = 0;
     while (i <=N)
     {
         cout << "������ �����:";
         cin >> num;
         cout << endl;
         dobutok *= num;
         suma += num;
         i++;
     }
     cout << "������ ����������� �����: " << suma/N << endl;
     cout << "������� �����: " << dobutok << endl;*/

     //5.������� �� ����� ��� ������  ����� : 100 98 96 94...4  2 1. - do..while
    /* int i=100;
     do
     {
      if (i % 2 == 0)
         cout << i << " ";
      i--;
     } while (i >= 1);

     cout << endl; */

     //6.�������� �������� ��� �������� ������� ���� �����, �� ��������� � ���������. - do..while
    /* int N = 5;
     int num, dobutok;
     int i=N;
     do
     {
         cout << "������ �����:";
         cin >> num;
         cout << endl;
         dobutok *= num;
         i--;

     } while (i >= 1);

     cout << "������� ����� �����: " << dobutok << endl;*/

}
