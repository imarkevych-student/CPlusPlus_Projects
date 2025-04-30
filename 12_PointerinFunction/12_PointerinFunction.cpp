//#include <iostream>
//using namespace std;
//
//void ChangeVariable(int a)//5 ---> int a = 5;
//{
//    a++;
//}
//void ChangeVariable(int* a)//int * a = 0x147855
//{
//    (*a)++;
//}
//
//int FindMax(int a, int b, int c)
//{
//    if (a > b && a > c)
//    {
//        return a;
//    }
//    if (b > a && b > c)
//    {
//        return b;
//    }
//    return c;
//}
//int* FindMax(int* a, int* b, int* c)
//{
//    if (*a > *b && *a > *c)
//    {
//        return a;
//    }
//    if (*b > *a && *b > *c)
//    {
//        return b;
//    }
//    return c;
//}
//void FillArr(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        *(arr + i) = rand() % 100;
//    }
//}
//void ShowArr(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << *(arr + i) << " ";
//    }
//    cout << endl;
//}
//int* FindMax(int* arr, int size)
//{
//    int* max = arr;
//    for (int i = 0; i < size; i++)
//    {
//        if (*(arr + i) > *max) {
//            max = arr + i;
//        }
//    }
//    return max;
//}
//int main()
//{
//    srand(time(0));
//    const int size = 10;
//    int arr[size];
//    FillArr(arr, size);
//    ShowArr(arr, size);
//    int* max = FindMax(arr, size);
//    cout << "Max = " << *max << endl;
//    *max = (*max) * 2;
//    ShowArr(arr, size);
//
//
//
//    /*int a, b, c;
//    cout << "Enter a , b , c : ";
//    cin >> a >> b >> c;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;
//    int max =  FindMax(a, b, c);
//    cout << "Max = " << max << endl;
//    max++;
//    cout << "Max = " << max << endl;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;
//    int * Max = FindMax(&a, &b, &c);
//    cout << "Max = " << Max << endl;
//    cout << "Max = " << *Max << endl;
//    (*Max)++;
//    cout << "Max = " << *Max << endl;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;*/
//
//
//
//    //int a = 5;
//    ////a++;//a = a + 1
//    ////a + 1;
//    //int* pa = &a;// & - амперсент
//    //cout << "a = " << a << endl;
//    //cout << "pa = " << pa << endl;
//    //cout << "*pa = " << *pa << endl;
//    //ChangeVariable(a);//5
//    //cout << "a = " << a << endl;
//    ////ChangeVariable(pa);// 0x147855
//    //ChangeVariable(&a);// 0x147855
//    //cout << "a = " << a << endl;
//
//
//
//
//}