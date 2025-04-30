#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}



int main()
{
    for (int i = 0; i < 16; i++)
    {
        SetColor(i);
        cout << "Hello World!\n";
    }
    Sleep(2000);
    system("cls");
    for (int i = 0; i < 16; i++)
    {
        SetColor(i);
        SetPos(rand() % 50, rand() % 50);
        cout << "*";
        Sleep(1000);
    }
    SetColor(4); cout << "Hello World!\n"; SetColor(7);
    cout << "Hello World!\n";
    cout << "Hello World!\n";
    cout << "Hello World!\n";
    cout << "Hello World!\n";
    cout << "Hello World!\n";

    //setw(n) - n - count of  conteiners in console
    cout << setw(5) << "AAA" << endl;
    //cout << "AAA" << setw(5) << endl;
    cout << "B" << endl;
    cout << "C" << endl;

    double x = -5, y = 2.7, z = 3.14;
    cout << left << setw(5) << x << endl;
    cout << setw(5) << y << endl;
    cout << setw(5) << z << endl;
    int a = 1.25;//неяне 
    int b = (int)1.25;//явне 

    /* for (int i = 0; i < 255; i++)
     {
         cout <<"code = "<< i << " char =  "<<   (char)i << endl;
     }*/
}