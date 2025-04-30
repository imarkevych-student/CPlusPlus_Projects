#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

/*Завдання 1
Дано текстовий файл. Необхідно створити новий файл, у який переписати з вихідного файлу всі слова, що складаються не менше ніж із семи літер.

Завдання 2
Дано текстовий файл. Необхідно переписати його рядки в інший файл. Порядок рядків у другому файлі повинен збігатися з порядком рядків у заданому файлі.

Завдання 3
Дано текстовий файл. Необхідно переписати його рядки в інший файл. Порядок рядків у другому файлі повинен бути зворотним до порядку рядків у заданому файлі.

Завдання 4
Дано текстовий файл. Додати в нього рядок з дванадцяти рисок (------------), помістивши його після останнього з рядків, у яких немає пробілу. Якщо таких рядків немає, то новий рядок має бути додано після всіх рядків наявного файлу. Результат записати в інший файл.*/
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

    cout << "Слова довжиною >= 7 записали в output.txt" << endl;
}