//#include <iostream>
//#include <fstream>
//#include <Windows.h>
//using namespace std;
////Завдання 2
////Реалізуйте клас «Точка».Необхідно зберігати координати x, y, z в змінних - членах класу.Реалізуйте функції - члени класу для введення даних, виведення даних, реалізуйте аксесор для доступу до змінних - членів, реалізуйте збереження в файл і завантаження даних з файлу.
//
//class Point {
//private:
//    double x, y, z; 
//
//public:
//   
//    double getX() const { return x; }
//    double getY() const { return y; }
//    double getZ() const { return z; }
//
//    void setX(double xVal) { x = xVal; }
//    void setY(double yVal) { y = yVal; }
//    void setZ(double zVal) { z = zVal; }
//
//    
//    void initPoint() {
//        cout << "Введіть координати точки (x, y, z): ";
//        cin >> x >> y >> z;
//    }
//
//   
//    void outputPoint() const {
//        cout << "Точка з координатами: (" << x << ", " << y << ", " << z << ")" << endl;
//    }
//
//   
//    void saveToFile(const char* filename) const {
//        ofstream outFile(filename, ios::out);
//        if (outFile) {
//            outFile << x << " " << y << " " << z << endl;
//            outFile.close();
//            cout << "Дані збережено в файл \"" << filename << "\"." << endl;
//        }
//        else {
//            cout << "Помилка відкриття файлу для запису!" << endl;
//        }
//    }
//
//   
//    void loadFromFile(const char* filename) {
//        ifstream inFile(filename, ios::in);
//        if (inFile) {
//            inFile >> x >> y >> z;
//            inFile.close();
//            cout << "Дані завантажено з файлу \"" << filename << "\"." << endl;
//        }
//        else {
//            cout << "Помилка відкриття файлу для читання!" << endl;
//        }
//    }
//};
//
//void main() {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    Point p; 
//
//    cout << "1. Введення даних\n";
//    p.initPoint();
//
//    cout << "2. Виведення даних\n";
//    p.outputPoint();
//
//    cout << "3. Збереження даних у файл\n";
//    p.saveToFile("point.txt");
//
//    cout << "4. Завантаження даних із файлу\n";
//    Point p2;
//    p2.loadFromFile("point.txt");
//    p2.outputPoint();   
//}