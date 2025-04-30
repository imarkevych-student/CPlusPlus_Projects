//#include <iostream>
//#include <Windows.h>
//#include <cmath>
//using namespace std;
////Завдання 1 Створити структуру, що описує прямокутник.Написати функції для роботи з цією структурою : переміщення прямокутника, зміна розміру прямокутника, друк прямокутника.
//
//struct rectangle{
//    int x;        
//    int y;        
//    int width;    
//    int height;   
// 
//    void moveRectangle(int dx, int dy) {
//        x += dx;
//        y += dy;
//    }
//
//   
//    void resizeRectangle(int newWidth, int newHeight) {
//        width = newWidth;
//        height = newHeight;
//    }
//
//  
//    void printRectangleWithAsteriks() const {
//        for (int i = 0; i < height; i++) {
//            for (int j = 0; j < width; j++) {
//                cout << "*";
//            }
//            cout << endl;
//        }
//    }
//
//    void printRectangleProperties() const {
//        cout << "Координати верхнього лівого кута (x, y): (" << x << ", " << y << ")\n";
//        cout << "Ширина: " << width << "\n";
//        cout << "Висота: " << height << "\n";
//    }
//};
//// Завдання 2. Створіть структуру, що описує точку в двовимірній системі координат(x, y). За допомогою цієї структури задайте дві точки. Напишіть функцію, яка обчислює відстань між цими двома точками.
//struct point {
//    double x; 
//    double y; 
//
//    
//    double distanceTo(const point& other) const {
//        double dx = other.x - x;
//        double dy = other.y - y;
//        return sqrt(dx * dx + dy * dy);
//    }
//};
//
//// Завдання 3 Створіть структуру, що описує простий дріб.Реалізуйте арифметичні операції з дробами : суму, різницю, множення, ділення. Врахувати можливість скорочення дробів і переведення з неправильного дробу в простий.
//struct fraction {
//    int numerator;   
//    int denominator; 
//    
//    fraction(int num, int den) {
//        numerator = num;
//        denominator = (den != 0) ? den : 1;
//        simplify();
//    }
//
//    int gcd(int a, int b) const {
//        while (b != 0) {
//            int temp = b;
//            b = a % b;
//            a = temp;
//        }
//        return abs(a);
//    }    
//    void simplify() {
//        int divisor = gcd(numerator, denominator); 
//        numerator /= divisor;
//        denominator /= divisor;
//
//        
//        if (denominator < 0) {
//            numerator = -numerator;
//            denominator = -denominator;
//        }
//    }
//    void toMixedForm() const {
//        int wholePart = numerator / denominator;
//        int remainder = abs(numerator % denominator);
//        if (wholePart != 0) {
//            cout << "Змішана форма: " << wholePart;
//            if (remainder != 0) {
//                cout << " " << remainder << "/" << denominator;
//            }
//            cout << endl;
//        }
//        else {
//            cout << "Дріб: " << numerator << "/" << denominator << endl;
//        }
//    }
//    fraction add(const fraction& other) const {
//        int num = numerator * other.denominator + other.numerator * denominator;
//        int den = denominator * other.denominator;
//        return fraction(num, den);
//    }   
//    fraction subtract(const fraction& other) const {
//        int num = numerator * other.denominator - other.numerator * denominator;
//        int den = denominator * other.denominator;
//        return fraction(num, den);
//    }    
//    fraction multiply(const fraction& other) const {
//        int num = numerator * other.numerator;
//        int den = denominator * other.denominator;
//        return fraction(num, den);
//    }
//    fraction divide(const fraction& other) const {
//        int num = numerator * other.denominator;
//        int den = denominator * other.numerator;
//        return fraction(num, den);
//    }
// 
//    void printFraction() const {
//        cout << numerator << "/" << denominator << endl;
//    }
//};
//
//void main() {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//  // Task 1
//    rectangle rect = { 0, 0, 5, 3 };
//
//   
//    cout << "Початковий прямокутник:\n";
//    rect.printRectangleProperties();
//    rect.printRectangleWithAsteriks();
//   
//    cout << "\nПереміщуємо прямокутник...\n";
//    rect.moveRectangle(2, 2);
//    rect.printRectangleProperties();
//    
//    cout << "\nЗмінюємо розмір прямокутника...\n";
//    rect.resizeRectangle(7, 4);
//    rect.printRectangleProperties();
//    rect.printRectangleWithAsteriks();
//
//    // Task2
//    point point1 = { 0, 0 }; 
//    point point2 = { 3, 4 }; 
//    double distance = point1.distanceTo(point2);
//    cout << "Відстань між точками (" << point1.x << ", " << point1.y << ") і (" << point2.x << ", " << point2.y << ") становить: " << distance << endl;
//
//    // Task3
//    fraction frac1(7, 3);
//    fraction frac2(2, 5);
//    cout << "Знаменник 1: " << frac1.numerator << endl;
//    cout << "Чисельник 1: " << frac1.denominator << endl;
//    cout << "Знаменник 2: " << frac2.numerator << endl;
//    cout << "Чисельник 2: " << frac2.denominator << endl;
//
//    fraction sum = frac1.add(frac2);
//    cout << "Сума дробів: ";
//    sum.printFraction();
//    fraction difference = frac1.subtract(frac2);
//    cout << "Різниця дробів: ";
//    difference.printFraction();
//
//    fraction product = frac1.multiply(frac2);
//    cout << "Добуток дробів: ";
//    product.printFraction();
//    
//    fraction quotient = frac1.divide(frac2);
//    cout << "Частка дробів: ";
//    quotient.printFraction();
//
//    cout << "Неправильний дріб у змішаній формі для frac1: ";
//    frac1.toMixedForm();
//
//
//}