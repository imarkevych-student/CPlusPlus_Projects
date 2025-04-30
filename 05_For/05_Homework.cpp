#include <iostream>
#include <Windows.h>
using namespace std;
void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int choice;
    int size=6;
    do {
        cout << "\n����:\n";
        cout << "1. ������� ��� �������� ���������\n";
        cout << "2. ������� �� �������� ���������\n";
        cout << "3. ������� ��� �������� �� ������� ���������\n";
        cout << "4. ������� �� �������� �� ������� ���������\n";
        cout << "5. ������� ��� �� �� �������� �� ������� ���������\n";
        cout << "6. ������� ���� �� ������ �� ����������\n";
        cout << "7. ������� ���� �� ����������\n";
        cout << "8. ������� ������ �� ����������\n";
        cout << "9. ������� ��� ������� ���������\n";
        cout << "10. ������� �� ������� ���������\n";
        cout << "11. �����\n";
        cout << "��� ����: ";
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
            cout << "�� ���������!\n";
            break;
        default:
            cout << "������� ����, ��������� �� ���.\n";
        }
    } while (choice != 11);
}