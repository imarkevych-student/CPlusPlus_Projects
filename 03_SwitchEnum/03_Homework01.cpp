//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//void main()
//{
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//   /* 1.������� �� ����� ��� ����� �� 1 �� 100. - while
//    2.������� �� ����� ������ ���� �����, �� �� ����������� 200, �� �� �������. - while
//    3.���� N(N > 0).��������� N �����.������ ���� ������ ����� ��� �����. - while
//    4.��������� 10 �����.������ ���� �� ������ ����������� ��� �����. - while
//    5.������� �� ����� ��� ����� : 100 99 98 97...3 2 1. - do..while
//    6.�������� �������� ��� �������� ���� ���� �����, �� ��������� � ���������. - do..while*/
//
//    //Task1
//    /*int i = 1;
//    while (i >=1 && i <=100)
//    {
//        cout << i << " ";
//        i++;
//    }
//    cout << endl;*/
//    
//    //Task2
//   /* int i = 0;
//    while (i >=0 && i <=200)
//    {
//        cout << i << " ";
//        i+=2;
//    }
//    cout << endl;*/
//    
//    //3.���� N(N > 0).��������� N �����.������ ���� ������ ����� ��� �����. - while
//    /*int N = 0;
//    int num,suma;
//    cout << "������ ������� �����:";
//    cin >> N;
//
//    int i = 0;
//    while (i >=0 && i <=N)
//    {
//        cout << "������ �����:";
//        cin >> num;
//        cout << endl;
//        if (num % 2 == 0)
//            suma += num;       
//        i++;
//    }
//    cout << "���� ������ �����: " << suma << endl;*/
//
//    //4.��������� 10 �����.������ ���� �� ������ ����������� ��� �����. - while
//    /*int N = 10;
//    int num,suma;
//
//    int i = 0;
//    while (i <=N)
//    {
//        cout << "������ �����:";
//        cin >> num;
//        cout << endl;       
//        suma += num;       
//        i++;
//    }
//    cout << "������ ����������� �����: " << suma/N << endl;*/
//    
//    //5.������� �� ����� ��� ����� : 100 99 98 97...3 2 1. - do..while
//    /*int i=100;
//    do
//    {
//        cout << i << " ";
//        i--;
//    } while (i >= 1);
//    
//    cout << endl;  */
//    
//    /*int N = 7;
//    int num, suma;
//    int i=N;
//    do
//    {
//        cout << "������ �����:";
//        cin >> num;
//        cout << endl;
//        suma += num;       
//        i--;
//
//    } while (i >= 1);
//    
//    cout << "���� �����: " << suma << endl;*/
//
//    //1. ���� �����.������� ����� �������. (5 countries)
//   /* enum Country {Ukraine, Germany, France, Italy, Japan, Unknown };
//
//     int country;
//    cout << "������ ����� ���� � ��������� ����: Ukraine - 0 , Germany - 1 , France - 2, Italy - 3, Japan - 4" << endl;
//    cout << "�����: ";
//    cin >> country;
//
//    switch (country) {
//    case Ukraine:
//        cout << "������� ������: ���" << endl;
//        break;
//    case Germany:
//        cout << "������� ͳ�������: �����" << endl;
//        break;
//    case France:
//        cout << "������� �������: �����" << endl;
//        break;
//    case Italy:
//        cout << "������� ���볿: ���" << endl;
//        break;
//    case Japan:
//        cout << "������� ����: ����" << endl;
//        break;
//    default:
//        cout << "����� �� �������� � ������." << endl;
//    }*/
//
////2.���� ����� ��� �����(1 � �������� � �.�.).��������� �� �� �������� ����.
//   /* int day;
//    cout << "������ ����� ��� ����� (1 � ��������, 2 � �������, ... , 7 � �����): ";
//    cin >> day;
//
//    switch (day) {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        cout << "�� ������� ����." << endl;
//        break;
//    case 6:
//    case 7:
//        cout << "�� �������� ����." << endl;
//        break;
//    default:
//        cout << "������� ����� ��� �����." << endl;
//    }*/
//
//    //.���� �������(����� �������. 1 � �����. 2 � ����.����). (7 animals) ������� ����, �� ����� ���������� �������(�����, ��������).
//
//    int animal;
//    cout << "������ ����� ������� (1 � �����, 2 � ����, 3 � ���, 4 � ����, 5 � �����, 6 � ������, 7 � ����): ";
//    cin >> animal;
//
//    switch (animal) {
//    case 1:
//        cout << "����� - ��������" << endl;
//        break;
//    case 2:
//        cout << "���� - �����" << endl;
//        break;
//    case 3:
//        cout << "��� - �����" << endl;
//        break;
//    case 4:
//        cout << "���� - ��������" << endl;
//        break;
//    case 5:
//        cout << "����� - �����" << endl;
//        break;
//    case 6:
//        cout << "������ - ��������" << endl;
//        break;
//    case 7:
//        cout << "���� - �����" << endl;
//        break;
//    default:
//        cout << "������� ����� �������." << endl;
//    }
//}
