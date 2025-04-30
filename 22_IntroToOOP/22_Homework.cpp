#include <iostream>
#include <fstream>
#include <Windows.h>
#include <cstring>
using namespace std;
//�������� 2
//��������� ���� ��������. ��������� �������� � ������ - ������ ����� : ϲ�, ���� ����������, ���������� �������, ����, �����, 
//����� ����������� �������, ���� �� �����(�� ����������� ���������� ������), �����  �����. ��������� ������� - ����� ����� ��� �������� �����, 
// ��������� �����, ��������� ������� ��� ������� �� ������� ������ - �����.

class Student {
private:
    char fullName[50];
    char dateOfBirth[11];
    char contactPhone[15];
    char city[30];
    char country[30];
    char univerName[50];
    char univerCity[30];
    char univerCountry[30];
    char groupNumber[10];

public:
    
    void setData(const char* paramName, const char* paramDate, const char* paramPhone, const char* paramCity,const char* paramCountry, const char* paramUniverName, const char* paramUniverCity,
        const char* paramUniverCountry, const char* paramGroup) 
    {
        strcpy_s(fullName, sizeof(fullName), paramName);
        strcpy_s(dateOfBirth, sizeof(dateOfBirth), paramDate);
        strcpy_s(contactPhone, sizeof(contactPhone), paramPhone);
        strcpy_s(city, sizeof(city), paramCity);
        strcpy_s(country, sizeof(country), paramCountry);
        strcpy_s(univerName, sizeof(univerName), paramUniverName);
        strcpy_s(univerCity, sizeof(univerCity), paramUniverCity);
        strcpy_s(univerCountry, sizeof(univerCountry), paramUniverCountry);
        strcpy_s(groupNumber, sizeof(groupNumber), paramGroup);
    }

    
    void displayData() 
    {
            cout << "ϲ�: " << fullName << "\n"
            << "���� ����������: " << dateOfBirth << "\n"
            << "���������� �������: " << contactPhone << "\n"
            << "̳���: " << city << "\n"
            << "�����: " << country << "\n"
            << "����� ����������� �������: " << univerName << "\n"
            << "̳��� ����������� �������: " << univerCity << "\n"
            << "����� ����������� �������: " << univerCountry << "\n"
            << "����� �����: " << groupNumber << "\n";
    }
   
    const char* getFullName() { return fullName; }
    const char* getDateOfBirth() { return dateOfBirth; }
    const char* getContactPhone() { return contactPhone; }
    const char* getCity() { return city; }
    const char* getCountry() { return country; }
    const char* getUniversityName() { return univerName; }
    const char* getUniversityCity() { return univerCity; }
    const char* getUniversityCountry() { return univerCountry; }
    const char* getGroupNumber() { return groupNumber; }
};

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Student student;
    student.setData("���� ��������", "01.01.2000", "+380123456789", "������", "������", "������������ ����������", "���", "������", "����� �-1");

    student.displayData();    
}