#include <iostream>
using namespace std;
#include <Windows.h>

//�������� 1: 
//�������� ���� �Time�, ���� ���� ��������� ��� 3 - �� ���������������� : ������, �������, �������.
//� ���� ������� ���������� ������� ������������ :
//� ����������� �� ������������() � ��������������� �������� ���
//� ����������������(hours, minutes, seconds) � ���������� ����� ����������
//� ����������������(seconds) � ������� ���� �������� ���� ������� ������ � ������, �������, �������.���������: 5555 = 1��� 32�� 35���
//� 5555 / 3600 - h; 5555 / 60 % 60 � m; 5555 % 60 - s
//����� ����������� ������ :
//1. ������ ���� �� ����� � ������ hh : mm:ss
//2. ��������� ���� �� ���� �������(11:59 : 59)++ -> 12 : 00 : 00
//���� ������� ���� �������������� ��������� ������� ��������� :
//� + � * / ���������� ����� ����������� �������� � ����� �� ����������� ��������� � ������ ������ ��'���� Time
//� > < >= <= ������������, ���� �ᒺ�� ������ ����� / ����� ������� ���� �� ����������� ��������� � ������ ���� bool
//� == != ������������ �� ����� ����� �� / ��������� ���
//������������ explicit ��� ������ ������������.

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:  
    Time() : hours(0), minutes(0), seconds(0) {}
   
    Time(int h, int m, int s) {
        this->seconds = s % 60;
        this->minutes = (m + s / 60) % 60;
        this->hours = (h + (m + s / 60) / 60) % 24;
    }

    explicit Time(int totalSeconds) {
        this->hours = (totalSeconds / 3600) % 24; 
        this->minutes = (totalSeconds % 3600) / 60;
        this->seconds = totalSeconds % 60;
    }
   
    int TotalSeconds() const {
        return this->hours * 3600 + this->minutes * 60 + this->seconds;
    }

    void Print() const {
        cout << (this->hours < 10 ? "0" : "") << this->hours << ":"
            << (this->minutes < 10 ? "0" : "") << this->minutes << ":"
            << (this->seconds < 10 ? "0" : "") << this->seconds << endl;
    }
   
    void addSecond() {
        this->seconds++;
        *this = Time(this->TotalSeconds());
    }

    Time operator+(const Time& other) const {
        return Time(this->TotalSeconds() + other.TotalSeconds());
    }
   
    Time operator-(const Time& other) const {
        int total = this->TotalSeconds() - other.TotalSeconds();
        return Time(total > 0 ? total : 0);
    }
   
    bool operator==(const Time& other) const {
        return this->TotalSeconds() == other.TotalSeconds();
    }

    bool operator!=(const Time& other) const {
        return !(*this == other);
    }

    bool operator<(const Time& other) const {
        return this->TotalSeconds() < other.TotalSeconds();
    }

    bool operator>(const Time& other) const {
        return other < *this;
    }

    bool operator<=(const Time& other) const {
        return !(other < *this);
    }

    bool operator>=(const Time& other) const {
        return !(*this < other);
    }
};

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Time t1(2, 59, 59);  
    Time t2(7777);      

    cout << "��� 1: ";
    t1.Print();

    cout << "��� 2: ";
    t2.Print();

    t1.addSecond();
    cout << "��� 1 ���� ��������� �� ���� �������: ";
    t1.Print();

    Time t3 = t1 + t2;
    cout << "���� ���� 1 � ���� 2: ";
    t3.Print();

    Time t4 = t1 - t2;
    cout << "г����� ���� 1 � ���� 2: ";
    t4.Print();

    cout << "��� 1 == ��� 2: " << (t1 == t2 ? "���" : "ͳ") << endl;
    cout << "��� 1 > ��� 2: " << (t1 > t2 ? "���" : "ͳ") << endl;
}