#include <iostream>
using namespace std;
#include <Windows.h>

/// ����: OPERATORS OVERLOADING
//�������� 1 :
//    �������� ���� Airplane(����), ���� ���� ���� ������� �������������� :
//� ������
//� ���
//� ʳ������ ��������
//� ����������� ������� ��������
//�� ��������� �������������� ��������� ���������� :
//1. �������� �� ������ ���� �����(�������� == ) friend
//2. ��������� � ��������� �������� � ����� �����(�������� ++ �� --
//    � ��������� ����)
//    3. ��������� ���� ����� �� ����������� ������� ������� ��������
//    �� �����(�������� > ) friend
//    4. �������� ������� �������� �� ����� ��������(��������(15))
//    �������������� ������� �������� �������� �� ��������� ������ �������.
//    ��� �������� ��������, ������� ��������� �� �� ����������� �����������
//    ������� ��������.
//    !��������� ����������� � ������.cpp �����.

class Airplane
{
private:	
	string	model;
	string type;
	int pessengers;
	int maxPessengers;

public:
	Airplane(string model, string type, int pessengers, int maxPessengers)
		: model(model), type(type), pessengers(pessengers), maxPessengers(maxPessengers) {	};

	friend bool operator ==(const Airplane& a1, const Airplane& a2) {
		return a1.type == a2.type;
	}

};



void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

	Airplane airlane1("Boeing 747", "Commercial", 150, 300);
	Airplane airlane2("Airbus A320", "Commercial", 120, 200);

	if (airlane1 == airlane2)
	{
		cout << "˳���� ���������� ����\n";
	}
	else 
	{
		cout << "˳���� ������ ����\n";
	}
}