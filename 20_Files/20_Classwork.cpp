#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

/*�������� 1
���� ��������� ����. ��������� �������� ����� ����, � ���� ���������� � ��������� ����� �� �����, �� ����������� �� ����� �� �� ���� ����.

�������� 2
���� ��������� ����. ��������� ���������� ���� ����� � ����� ����. ������� ����� � ������� ���� ������� �������� � �������� ����� � �������� ����.

�������� 3
���� ��������� ����. ��������� ���������� ���� ����� � ����� ����. ������� ����� � ������� ���� ������� ���� ��������� �� ������� ����� � �������� ����.

�������� 4
���� ��������� ����. ������ � ����� ����� � ���������� ����� (------------), ��������� ���� ���� ���������� � �����, � ���� ���� ������. ���� ����� ����� ����, �� ����� ����� �� ���� ������ ���� ��� ����� �������� �����. ��������� �������� � ����� ����.*/
bool isLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isSevenOrMoreLetters(int length) {
    return length >= 7;
}


void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    ifstream inputFile("input.txt"); 
    ofstream outputFile("output.txt"); 
    char word[100]; 
    int index = 0; 
    char ch;

    while (inputFile.get(ch)) {
        if (isLetter(ch)) {
            word[index++] = ch;
        }
        else {
            if (index > 0) {
                word[index] = '\0';
                if (isSevenOrMoreLetters(index)) {
                    outputFile << word << "\n";
                }
                index = 0;
            }
        }
    }        

    inputFile.close();
    outputFile.close();

    cout << "����� �������� >= 7 �������� � output.txt" << endl;
}