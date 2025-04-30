#include <iostream>
#include <Windows.h>
using namespace std;
void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int choice;
    int size=6;
    do {
        cout << "\nМеню:\n";
        cout << "1. Область над головною діагоналлю\n";
        cout << "2. Область під головною діагоналлю\n";
        cout << "3. Область над головною та побічною діагоналлю\n";
        cout << "4. Область під головною та побічною діагоналлю\n";
        cout << "5. Область над та під головною та побічною діагоналлю\n";
        cout << "6. Область зліва та справа від діагоналлей\n";
        cout << "7. Область зліва від діагоналлей\n";
        cout << "8. Область справа від діагоналлей\n";
        cout << "9. Область над побічною діагоналлю\n";
        cout << "10. Область під побічною діагоналлю\n";
        cout << "11. Вийти\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1:  
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i < j) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i >= j) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 3:
            for (int i = 0; i < size+1; i++) {
                for (int j = 0; j < size+1; j++) {
                    if (i <= j && (i + j <= size)) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 4:
            for (int i = 0; i < size+1; i++) {
                for (int j = 0; j < size+1; j++) {
                    if ((i >= j) && (i + j > size - 1) ) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 5:
            for (int i = 0; i < size + 1; i++) {
                for (int j = 0; j < size + 1; j++) {
                    if (i <= j && (i + j <= size) ||  ((i >= j) && (i + j >= size))) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 6:
            for (int i = 0; i < size + 1; i++) {
                for (int j = 0; j < size + 1; j++) {
                    if (!(i <= j && (i + j <= size)) && !((i >= j) && (i + j >= size))) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 7:
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (!((i <= j) || (i + j >= size))) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 8:
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (!(!(i <= j) || !(i + j >= size))) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 9:
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i + j < size) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 10:
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i + j >= size - 1) cout << "*";
                    else cout << " ";
                }
                cout << endl;
            }
            break;
        case 11:
            cout << "До побачення!\n";
            break;
        default:
            cout << "Невірний вибір, спробуйте ще раз.\n";
        }
    } while (choice != 11);
}