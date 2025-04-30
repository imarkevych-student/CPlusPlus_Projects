//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a = 5;
//    cout << " a = " << a << endl;
//
//    //pointers
//    int* pa = &a;
//    cout << "pa" << pa << endl;
//    cout << "*pa  " << *pa << endl;
//
//    int b = 10;
//    int* pb = &b;
//    cout << "b = " << b << endl;
//    cout << "pb = " << pb << endl;
//    cout << "*pb = " << *pb << endl;
//
//    cout << a + b << endl;
//    cout << *pa + *pb << endl;
//
//    pa = &b;
//    b += 5;
//    *pa += 2;
//    cout << "b = " << b << endl;
//    cout << "*pa  " << *pa << endl;
//    cout << "*pb = " << *pb << endl;
//
//
//    const int size = 10;
//    int arr[size];
//    int* parr = &arr[0];
//
//    /* for (int i = 0; i < size; i++)
//     {
//         *(parr + i) = rand() % 100;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<< *(parr + i) <<" ";
//     }
//     cout << endl;
//
//     cout << arr[0] << endl;
//     cout << parr << endl;
//     cout << arr << endl;
//     cout << *parr << endl;
//     cout << arr[1] << endl;
//     cout << parr + 1 << endl;
//     cout << *(parr +1) << endl;
//
//     int c = 3;
//     c + 1;
//     cout << c << endl;
//     c++;
//     cout << c << endl;*/
//
//
//    int* p_arr = arr;
//    for (int i = 0; i < size; i++)
//    {
//        *p_arr = rand() % 100;
//        p_arr++;
//    }
//    p_arr = arr;
//    for (int i = 0; i < size; i++)
//    {
//        cout << *p_arr << " ";
//        p_arr++;
//    }
//    cout << endl;
//
//    int* newptr = arr;
//    *newptr = 0;
//    newptr += 4;
//    *newptr = 0;
//
//    p_arr = arr;
//    for (int i = 0; i < size; i++)
//    {
//        cout << *p_arr << " ";
//        p_arr++;
//    }
//    cout << endl;
//    p_arr--;
//    for (int i = 0; i < size; i++)
//    {
//        cout << *p_arr << " ";
//        p_arr--;
//    }
//
//
//
//
//
//}