//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//void printRectangle(int N, int K);
//long factorial(int n);
//bool isSimple(int n);
//int cube(int n);
//int getMax(int a, int b);
//bool isPositive(int n);
//
//void main()
//{
//    с
//    //Завдання 1.
//    int height, width;
//    cout << "Введіть висоту прямокутника (N): ";
//    cin >> height;
//    cout << "Введіть ширину прямокутника (K): ";
//    cin >> width;
//    printRectangle(height, width);
//    
//    
//    //Завдання 2.
//    int number2;
//    cout << "Введіть число для обчислення факторіалу: ";
//    cin >> number2;    
//    cout << "Факторіал числа " << number2 << " дорівнює " <<  factorial(number2) << endl;
//
//    //Завдання 3.
//    int number3;
//
//    cout << "Введіть число для перевірки: ";
//    cin >> number3;
//
//    if (isSimple(number3)) {
//        cout << "Число " << number3 << " є простим." << endl;
//    }
//    else {
//        cout << "Число " << number3 << " не є простим." << endl;
//    }
//    
//    //Завдання 4.
//    int number4;
//    cout << "Введіть число для обчислення куба: ";
//    cin >> number4;
//    cout << "Куб числа " << number4 << " дорівнює " <<  cube(number4) << endl;
//   
//    //Завдання 5.
//    int num1, num2;
//    cout << "Введіть два числа: ";
//    cin >> num1 >> num2;
//    cout << "Найбільше число: " << getMax(num1, num2) << endl;
//    
//    //Завдання 5.
//    int number5;
//
//    cout << "Введіть число для перевірки: ";
//    cin >> number5;
//
//    if (isPositive(number5)) {
//        cout << "Число " << number5 << " є додатнім." << endl;
//    }
//    else {
//        cout << "Число " << number5 << " є від'ємним." << endl;
//    }
//
//}
////Завдання 1. Написати функцію, що виводить на екран прямокутник з висотою N і шириною K.
//
//void printRectangle(int N, int K) {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < K; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//   //Завдання 2. Написати функцію, яка обчислює факторіал переданого їй числа.
//
//long factorial(int n) {
//    long result = 1;
//    for (int i = 1; i <= n; ++i) {
//        result *= i;
//    }
//    return result;
//}
//
//   //Завдання 3. Написати функцію, яка перевіряє, чи є передане їй число простим.Число називається простим, якщо воно ділиться без залишку тільки на себе та на одиницю.
//
//bool isSimple(int n) {
//    
//    for (int i = 2; i <= n / 2; ++i) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//   //Завдання 4. Написати функцію, яка повертає куб числа. 
//int cube(int n) {
//    return n * n * n;
//}
//    
//   //Завдання 5. Написати функцію для знаходження найбільшого з двох чисел.
//
//int getMax(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//   //Завдання 6. Написати функцію, яка повертає істину, якщо передане значення додатне, та брехню, якщо від’ємне.
//
//bool isPositive(int n) {
//    return n > 0;
//}
//
//
//   //Завдання 1. Написати функцію, що визначає мінімум і максимум(значення й номер) елементів переданого їй масиву.
//
//   //Завдання 2. Написати функцію, яка міняє порядок елементів переданого їй масиву на протилежний.
//
//   //Завдання 3. Написати функцію, яка повертає кількість простих чисел у переданому їй масиві.
//
