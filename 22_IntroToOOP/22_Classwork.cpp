//#include <iostream>
//#include <fstream>
//#include <Windows.h>
//using namespace std;
////�������� 2
////��������� ���� ������.��������� �������� ���������� x, y, z � ������ - ������ �����.��������� ������� - ����� ����� ��� �������� �����, ��������� �����, ��������� ������� ��� ������� �� ������ - �����, ��������� ���������� � ���� � ������������ ����� � �����.
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
//        cout << "������ ���������� ����� (x, y, z): ";
//        cin >> x >> y >> z;
//    }
//
//   
//    void outputPoint() const {
//        cout << "����� � ������������: (" << x << ", " << y << ", " << z << ")" << endl;
//    }
//
//   
//    void saveToFile(const char* filename) const {
//        ofstream outFile(filename, ios::out);
//        if (outFile) {
//            outFile << x << " " << y << " " << z << endl;
//            outFile.close();
//            cout << "��� ��������� � ���� \"" << filename << "\"." << endl;
//        }
//        else {
//            cout << "������� �������� ����� ��� ������!" << endl;
//        }
//    }
//
//   
//    void loadFromFile(const char* filename) {
//        ifstream inFile(filename, ios::in);
//        if (inFile) {
//            inFile >> x >> y >> z;
//            inFile.close();
//            cout << "��� ����������� � ����� \"" << filename << "\"." << endl;
//        }
//        else {
//            cout << "������� �������� ����� ��� �������!" << endl;
//        }
//    }
//};
//
//void main() {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    Point p; 
//
//    cout << "1. �������� �����\n";
//    p.initPoint();
//
//    cout << "2. ��������� �����\n";
//    p.outputPoint();
//
//    cout << "3. ���������� ����� � ����\n";
//    p.saveToFile("point.txt");
//
//    cout << "4. ������������ ����� �� �����\n";
//    Point p2;
//    p2.loadFromFile("point.txt");
//    p2.outputPoint();   
//}