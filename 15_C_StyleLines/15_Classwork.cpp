//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//void main() {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//
//    //1.��������� �����. ���� ���� � ����� ����� ��� �� �� ?
//    char text[256]; 
//    cout << "������ �����: ";
//    cin.getline(text, 256); 
//
//    int countA = 0, countO = 0;
//  
//    for (int i = 0; i < strlen(text); i++) {
//        if (text[i] == '�') {
//            countA++;
//        }
//        else if (text[i] == '�') {
//            countO++;
//        }
//    }
//    
//    if (countA > countO) {
//        cout << "� ����� ����� ���� '�'." << endl;
//    }
//    else if (countO > countA) {
//        cout << "� ����� ����� ���� '�'." << endl;
//    }
//    else {
//        cout << "ʳ������ ���� '�' �� '�' ��������." << endl;
//    }
//
//    //2.��������� �����. ���������� ������� ���������� ����, ���� �� ������ � �����.
//    char text2[256]; 
//    cout << "������ �����: ";
//    cin.getline(text2, 256); 
//
//    int latinLetters = 0, digits = 0, spaces = 0;
//    
//    for (int i = 0; i < strlen(text2); i++) {
//        if ((text2[i] >= 'a' && text2[i] <= 'z') || (text2[i] >= 'A' && text2[i] <= 'Z')) {
//            latinLetters++;
//        }
//        else if (text2[i] >= '0' && text2[i] <= '9') {
//            digits++;
//        }
//        else if (text2[i] == ' ') {
//            spaces++;
//        }
//    }   
//    cout << "ʳ������ ���������� ����: " << latinLetters << endl;
//    cout << "ʳ������ ����: " << digits << endl;
//    cout << "ʳ������ ������: " << spaces << endl;
//
//   // 3.���� �����. ������� � ����� �� ����� ����� �� ��� � �������.
//    char text3[256];
//    cout << "������ �����: ";
//    cin.getline(text3, 256);
//
//    for (int i = 0; i < strlen(text3); i++) {
//        if (islower(text3[i])) {
//            text3[i] = toupper(text3[i]); 
//        }
//        else if (isupper(text3[i])) {
//            text3[i] = tolower(text3[i]);
//        }
//    }
//
//    cout << "������������� �����: " << text3 << endl;
//
//}
