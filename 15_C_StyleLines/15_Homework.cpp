#include <iostream>
#include <Windows.h>

using namespace std;

int calculateLength(const char* str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void removeCharacter(const char* input, char* output, char toRemove) {
    int j = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != toRemove) {
            output[j++] = input[i]; 
        }
    }
    output[j] = '\0'; 
}

bool isGolosna(char ch) {    
    char golosni[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    for (int i = 0; i < 10; i++) {
        if (ch == golosni[i]) {
            return true;
        }
    }
    return false;
}

bool isAlphabet(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isWhitespace(char ch) {
    return ch == ' ' || ch == '\t' || ch == '\n';
}

bool isPunctuation(char ch) {
    char punctuation[] = { '.', ',', ';', ':', '!', '?', '-', '(', ')', '[', ']', '{', '}', '\'', '\"' };
    for (int i = 0; i < 16; i++) {
        if (ch == punctuation[i]) {
            return true;
        }
    }
    return false;
}

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    //1.��������� �����. ���� ���� � ����� ����� ��� �� �� ?
    cout << "Task01" << endl;
    char text[256];
    cout << "������ �����: ";
    cin.getline(text, 256);

    int countA = 0, countO = 0;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == '�') {
            countA++;
        }
        else if (text[i] == '�') {
            countO++;
        }
    }

    if (countA > countO) {
        cout << "� ����� ����� ���� '�'." << endl;
    }
    else if (countO > countA) {
        cout << "� ����� ����� ���� '�'." << endl;
    }
    else {
        cout << "ʳ������ ���� '�' �� '�' ��������." << endl;
    }

    //2.��������� �����. ���������� ������� ���������� ����, ���� �� ������ � �����.
    cout << "Task02" << endl;
    char text2[256];
    cout << "������ �����: ";
    cin.getline(text2, 256);

    int latinLetters = 0, digits = 0, spaces = 0;

    for (int i = 0; i < strlen(text2); i++) {
        if ((text2[i] >= 'a' && text2[i] <= 'z') || (text2[i] >= 'A' && text2[i] <= 'Z')) {
            latinLetters++;
        }
        else if (text2[i] >= '0' && text2[i] <= '9') {
            digits++;
        }
        else if (text2[i] == ' ') {
            spaces++;
        }
    }
    cout << "ʳ������ ���������� ����: " << latinLetters << endl;
    cout << "ʳ������ ����: " << digits << endl;
    cout << "ʳ������ ������: " << spaces << endl;

    // 3.���� �����. ������� � ����� �� ����� ����� �� ��� � �������.
    cout << "Task03" << endl;
    char text3[256];
    cout << "������ �����: ";
    cin.getline(text3, 256);

    for (int i = 0; i < strlen(text3); i++) {
        if (islower(text3[i])) {
            text3[i] = toupper(text3[i]);
        }
        else if (isupper(text3[i])) {
            text3[i] = tolower(text3[i]);
        }
    }

    cout << "������������� �����: " << text3 << endl;

    //4.�������� �������, ��� ������ ����� � ������� ������� �����.  ��� ������������ ������� strlen()
    cout << "Task04" << endl;
    char line[100];

    cout << "������ �����: ";
    cin.getline(line, 100); 
    int length = calculateLength(line); 
    cout << "������� �����: " << length << endl;

    
   // 6 * **.��������� ��������, ��� ����� � ������ �����, � ���� ���� ���������� : ������� ��������� �������(whitespaces), ��������, �����������, ����� ����������. �������� ������������� �����������.
    
    cout << "Task06" << endl;
   
    const int MAX_LENGTH06 = 1000;
    char line06[MAX_LENGTH06];

    int whitespaceCount = 0, vowelCount = 0, consonantCount = 0, punctuationCount = 0;
    cin.clear();
    cout << "������ �����: ";
    cin.getline(line06, MAX_LENGTH06);

    for (int i = 0; line06[i] != '\0'; i++) {
        char ch = line06[i];

        if (isWhitespace(ch)) {
            whitespaceCount++;
        }
        else if (isAlphabet(ch) && !isGolosna(ch)) {
            consonantCount++;
        }
        else if (isGolosna(ch)) {
            vowelCount++;
        }
        else if (isPunctuation(ch)) {
            punctuationCount++;
        }
    }
    cout << "\n������� �������: " << whitespaceCount << endl;
    cout << "������ �����: " << vowelCount << endl;
    cout << "��������� �����: " << consonantCount << endl;
    cout << "����� ����������: " << punctuationCount << endl;

    //5***.���� �����. �������� �� ����� ������� ������. ��������� ��������� � ������ �����.
    cout << "Task05" << endl;
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH], output[MAX_LENGTH];
    char toRemove;

    cout << "������ �����: ";
    cin.getline(input, MAX_LENGTH); 

    cout << "������ ������, ���� ������� ��������: ";
    cin >> toRemove;

    removeCharacter(input, output, toRemove); 

    cout << "���������: " << output << endl;

}
