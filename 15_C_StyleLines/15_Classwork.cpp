//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//void main() {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//
//    //1.Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?
//    char text[256]; 
//    cout << "Введіть рядок: ";
//    cin.getline(text, 256); 
//
//    int countA = 0, countO = 0;
//  
//    for (int i = 0; i < strlen(text); i++) {
//        if (text[i] == 'а') {
//            countA++;
//        }
//        else if (text[i] == 'о') {
//            countO++;
//        }
//    }
//    
//    if (countA > countO) {
//        cout << "У рядку більше літер 'а'." << endl;
//    }
//    else if (countO > countA) {
//        cout << "У рядку більше літер 'о'." << endl;
//    }
//    else {
//        cout << "Кількість літер 'а' та 'о' однакова." << endl;
//    }
//
//    //2.Вводиться рядок. Порахувати кількість латинських букв, цифр та пробілів у рядку.
//    char text2[256]; 
//    cout << "Введіть рядок: ";
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
//    cout << "Кількість латинських літер: " << latinLetters << endl;
//    cout << "Кількість цифр: " << digits << endl;
//    cout << "Кількість пробілів: " << spaces << endl;
//
//   // 3.Дано рядок. Замінити у рядку всі великі букви на малі і навпаки.
//    char text3[256];
//    cout << "Введіть рядок: ";
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
//    cout << "Модифікований рядок: " << text3 << endl;
//
//}
