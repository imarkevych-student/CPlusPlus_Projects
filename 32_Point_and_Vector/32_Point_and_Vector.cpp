#include <iostream>
#include "Point.h"
#include "Vector.h"
#include <Windows.h>

using namespace std;

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Point p1(3, 4);
    Point p2(5, 2);
    Point p3(-1, -6);

    cout << "Початкові точки:" << endl;
    p1.Print();
    p2.Print();
    p3.Print();
    
    ++p1;
    --p2;
    p3 = !p3;

    cout << "\nЗмінені точки:" << endl;
    p1.Print();
    p2.Print();
    p3.Print();

    cout << "\nПорівняння точок:" << endl;
    cout << "p1 > p2: " << (p1 > p2 ? "true" : "false") << endl;
    cout << "p3 < p1: " << (p3 < p1 ? "true" : "false") << endl;

    
    Vector vec;
    vec.Add(p1);
    vec.Add(p2);
    vec.Add(p3);

    cout << "\nВектор точок:" << endl;
    vec.Print();
    
}