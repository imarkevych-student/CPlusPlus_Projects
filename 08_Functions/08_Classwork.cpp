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
//    �
//    //�������� 1.
//    int height, width;
//    cout << "������ ������ ������������ (N): ";
//    cin >> height;
//    cout << "������ ������ ������������ (K): ";
//    cin >> width;
//    printRectangle(height, width);
//    
//    
//    //�������� 2.
//    int number2;
//    cout << "������ ����� ��� ���������� ���������: ";
//    cin >> number2;    
//    cout << "�������� ����� " << number2 << " ������� " <<  factorial(number2) << endl;
//
//    //�������� 3.
//    int number3;
//
//    cout << "������ ����� ��� ��������: ";
//    cin >> number3;
//
//    if (isSimple(number3)) {
//        cout << "����� " << number3 << " � �������." << endl;
//    }
//    else {
//        cout << "����� " << number3 << " �� � �������." << endl;
//    }
//    
//    //�������� 4.
//    int number4;
//    cout << "������ ����� ��� ���������� ����: ";
//    cin >> number4;
//    cout << "��� ����� " << number4 << " ������� " <<  cube(number4) << endl;
//   
//    //�������� 5.
//    int num1, num2;
//    cout << "������ ��� �����: ";
//    cin >> num1 >> num2;
//    cout << "�������� �����: " << getMax(num1, num2) << endl;
//    
//    //�������� 5.
//    int number5;
//
//    cout << "������ ����� ��� ��������: ";
//    cin >> number5;
//
//    if (isPositive(number5)) {
//        cout << "����� " << number5 << " � �������." << endl;
//    }
//    else {
//        cout << "����� " << number5 << " � ��'�����." << endl;
//    }
//
//}
////�������� 1. �������� �������, �� �������� �� ����� ����������� � ������� N � ������� K.
//
//void printRectangle(int N, int K) {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < K; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//   //�������� 2. �������� �������, ��� �������� �������� ���������� �� �����.
//
//long factorial(int n) {
//    long result = 1;
//    for (int i = 1; i <= n; ++i) {
//        result *= i;
//    }
//    return result;
//}
//
//   //�������� 3. �������� �������, ��� ��������, �� � �������� �� ����� �������.����� ���������� �������, ���� ���� ������� ��� ������� ����� �� ���� �� �� �������.
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
//   //�������� 4. �������� �������, ��� ������� ��� �����. 
//int cube(int n) {
//    return n * n * n;
//}
//    
//   //�������� 5. �������� ������� ��� ����������� ���������� � ���� �����.
//
//int getMax(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//   //�������� 6. �������� �������, ��� ������� ������, ���� �������� �������� �������, �� ������, ���� �䒺���.
//
//bool isPositive(int n) {
//    return n > 0;
//}
//
//
//   //�������� 1. �������� �������, �� ������� ����� � ��������(�������� � �����) �������� ���������� �� ������.
//
//   //�������� 2. �������� �������, ��� ���� ������� �������� ���������� �� ������ �� �����������.
//
//   //�������� 3. �������� �������, ��� ������� ������� ������� ����� � ���������� �� �����.
//
