/*
#include <iostream>
using namespace std;



#define B 5
inline void Hello()
{
    cout << "Hello world" << endl;
}
///Перевантаження функцій по типу даних
int max_element(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
long max_element(long arr[], int size)
{
    long max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
float max_element(float arr[], int size)
{
    float max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
///Перевантаження функцій по кількості агрументи
double multy(double x)
{
    return x * x * x;
}
double multy(double x, double y)
{
    return x * x * y;
}
double multy(double x, double y, double z)
{
    return x * y * z;
}
//double multy(double x = 1, double y = 1, double z = 1, double p = 1)
//{
//    return x *y* z*p;
//}

//int Max(int a, int b)
//{
//    return (a > b) ? a : b;
//}
//float Max(float a, float b)
//{
//    return (a > b) ? a : b;
//}
//char Max(char a, char b)
//{
//    return (a > b) ? a : b;
//}
template <typename T>
T Max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
T2 Max(T1 a, T2 b)
{
    return (a > b) ? a : b;
}

int main()
{
    //Шаблони функцій
    int a = 5, b = 12;
    cout << "Max = " << Max(a, b) << endl;
    float x = 3.33, y = 1.45;
    cout << "Max = " << Max(x, y) << endl;
    char s1 = 'a', s2 = 'w';
    cout << "Max = " << Max(s1, s2) << endl;
    short d = 114, g = 125;
    cout << "Max = " << Max(d, g) << endl;
    cout << "Max = " << Max(15, 115.33) << endl;

    for (int i = 65; i < 65 + 10; i++)
    {
        cout << (char)i << endl;
    }
    cout << (char)69 << endl;



    //cout << "Res : " << multy(5) << endl;
    //cout << "Res : " << multy(5, 3) << endl;
    //cout << "Res : " << multy(5, 4, 7) << endl;
    ////cout << "Res : " << multy(5, 8, 9, 25) << endl;


    //int x[] = { 10,20,30,40,50,60 };
    //cout << "Max element = " << max_element(x, 6) << endl;
    //long l_arr[] = { 12L,13L,14L,15L,16L,17L,18L };
    //cout << "Max element = " << max_element(l_arr, 6) << endl;
    //float f_arr[] = { 0.1,0.2,0.3,0.4,0.5,0.6 };
    //cout << "Max element = " << max_element(f_arr, 6) << endl;


    //cout << "Hello world" << endl;// Hello();

    //int a = 5;
    //cout << a << endl;

    //cout << 5 << endl;
    //cout << a << endl;
    //cout << a << endl;
    //cout << a << endl;
    //cout << a << endl;
    //cout << a << endl;









   /* int a = 123;
    int f1 = a / 100;
    cout << f1 << endl;
    int f2 = a/10%10;
    cout << f2 << endl;
    int f3 = a%10;
    cout << f3 << endl;*/
    //Ключове слово inline




//}