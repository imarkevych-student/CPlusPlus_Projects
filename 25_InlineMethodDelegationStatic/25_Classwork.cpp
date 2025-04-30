//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
////�������� 1 : ������� ������� ���������� �����. ��������� �������� ��� ��� �������� (ϲ�, ������� �������, ������� �������, �������� �������, 
//// ��������� ���������� ��� �������) �������� ���������� �����(Abonent).�������� ���� ������� - �������, ��������� - �������, ��������������.
//// �������� �������� ����� ��� ������� ��������.����������� ����������� ������������.
//
//struct FullName {
//    string firstName;
//    string lastName;
//    string middleName;
//
//    string getFullName() const {
//        return firstName + " " + middleName + " " + lastName;
//    }
//};
//
//class Abonent {
//private:
//    FullName fullName; 
//    string homePhone;
//    string workPhone;
//    string mobilePhone;
//    string additionalInfo;
//
//    static int countAbonents;
//
//public:
//    
//    Abonent(FullName name, string home, string work, string mobile, string info)
//        : fullName(name), homePhone(home), workPhone(work), mobilePhone(mobile), additionalInfo(info) {
//        countAbonents++;
//    }
//
//    Abonent() : Abonent({ "�������", "�������", "�������" }, "�������", "�������", "�������", "���� ����������") {}
//   
//    ~Abonent() {
//        countAbonents--;
//    }    
//    static int getCountAbonents() {
//        return countAbonents;
//    }    
//
//    string getInfo() const {
//        return "ϲ�: " + fullName.getFullName() + "\n������� �������: " + homePhone +
//            "\n������� �������: " + workPhone + "\n�������� �������: " + mobilePhone +
//            "\n��������� ����������: " + additionalInfo + "\n";
//    }
//
//    void display() const {
//        cout << getInfo() << endl;
//    }
//
//};
//
//int Abonent::countAbonents = 0;
//
// void main() 
// {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    
//    FullName name1 = { "����", "������", "��������" };
//    Abonent a1(name1, "12345", "67890", "54321", "���� ���������");
//
//    FullName name2 = { "�����", "��������", "�������������" };
//    Abonent a2(name2, "98765", "43210", "11111", "������");
//    
//    FullName name3 = { "�����", "�������", "���������" };
//    Abonent a3(name3, "12345", "67890", "54321", "���� ���������");
//
//    FullName name4 = { "������", "����������", "�����������" };
//    Abonent a4(name4, "98765", "43210", "11111", "������");
//
//    cout << "\nʳ������ ��������: " << Abonent::getCountAbonents() << endl;
//    
//    a1.display();
//    a2.display();
//    a3.display();
//    a4.display();
//}