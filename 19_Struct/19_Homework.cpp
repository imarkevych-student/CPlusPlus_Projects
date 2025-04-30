#include <iostream>
#include <Windows.h>
using namespace std;

struct Book {
    char title[50];
    char author[50];
    char publisher[50];
    char genre[50];
   
    void print() const {
        cout << "�����: " << title << ", �����: " << author
            << ", �����������: " << publisher << ", ����: " << genre << endl;
    }
    
    void edit() {
        cout << "����������� �����:\n";
        cout << "������ ���� �����: ";
        cin.ignore();
        cin.getline(title, 50);
        cout << "������ ������ ������: ";
        cin.getline(author, 50);
        cout << "������ ���� �����������: ";
        cin.getline(publisher, 50);
        cout << "������ ����� ����: ";
        cin.getline(genre, 50);
    }
};

bool compareStrings(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) return true;
        if (str1[i] > str2[i]) return false;
        ++i;
    }
    return str1[i] == '\0' && str2[i] != '\0';
}

void printAllBooks(const Book books[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ". ";
        books[i].print();
    }
}

void searchByAuthor(const Book books[], int size, const char* author) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        bool match = true;
        for (int j = 0; j < 50; ++j) {
            if (books[i].author[j] != author[j]) {
                match = false;
                break;
            }
            if (author[j] == '\0') break;
        }
        if (match) {
            books[i].print();
            found = true;
        }
    }
    if (!found) {
        cout << "����� ������ \"" << author << "\" �� ��������.\n";
    }
}

void searchByTitle(const Book books[], int size, const char* title) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        bool match = true;
        for (int j = 0; j < 50; ++j) {
            if (books[i].title[j] != title[j]) {
                match = false;
                break;
            }
            if (title[j] == '\0') break;
        }
        if (match) {
            books[i].print();
            found = true;
        }
    }
    if (!found) {
        cout << "����� � ������ \"" << title << "\" �� ��������.\n";
    }
}
void sortByTitle(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (compareStrings(books[j].title, books[i].title)) {
                swap(books[i], books[j]);
            }
        }
    }
}
void sortByAuthor(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (compareStrings(books[j].author, books[i].author)) {
                swap(books[i], books[j]);
            }
        }
    }
}

void sortByPublisher(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (compareStrings(books[j].publisher, books[i].publisher)) {
                swap(books[i], books[j]);
            }
        }
    }
}


void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int SIZE = 10;
    Book books[SIZE] = {
        {"Book A", "Author X", "Publisher Y", "Fiction"},
        {"Book B", "Author Z", "Publisher X", "Fantasy"},
        {"Book C", "Author Y", "Publisher W", "Sci-Fi"},
        {"Book D", "Author X", "Publisher Z", "Drama"},
        {"Book E", "Author W", "Publisher Y", "Thriller"},
        {"Book F", "Author T", "Publisher X", "History"},
        {"Book G", "Author V", "Publisher W", "Romance"},
        {"Book H", "Author S", "Publisher Y", "Mystery"},
        {"Book I", "Author R", "Publisher Z", "Biography"},
        {"Book J", "Author Q", "Publisher X", "Adventure"}
    };

    while (true) {
        cout << "\n����:\n";
        cout << "1. ���������� �����\n";
        cout << "2. ���� ��� ����\n";
        cout << "3. ����� ����� �� �������\n";
        cout << "4. ����� ����� �� ������\n";
        cout << "5. ���������� �� ������\n";
        cout << "6. ���������� �� �������\n";
        cout << "7. ���������� �� ������������\n";
        cout << "8. �����\n";
        cout << "������ �����: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            int index;
            cout << "������ ����� ����� ��� ����������� (1-10): ";
            cin >> index;
            if (index >= 1 && index <= SIZE) {
                books[index - 1].edit();
            }
            else {
                cout << "������� ����� �����!\n";
            }
            break;
        }
        case 2:
            printAllBooks(books, SIZE);
            break;
        case 3: {
            char author[50];
            cout << "������ ������ ��� ������: ";
            cin.ignore();
            cin.getline(author, 50);
            searchByAuthor(books, SIZE, author);
            break;
        }
        case 4: {
            char title[50];
            cout << "������ ����� ��� ������: ";
            cin.ignore();
            cin.getline(title, 50);
            searchByTitle(books, SIZE, title);
            break;
        }
        case 5:
            sortByTitle(books, SIZE);
            cout << "����� ����������� �� ������.\n";
            break;
        case 6:
            sortByAuthor(books, SIZE);
            cout << "����� ����������� �� �������.\n";
            break;
        case 7:
            sortByPublisher(books, SIZE);
            cout << "����� ����������� �� ������������.\n";
            break;
        case 8:
            cout << "����� �� ��������.\n";
            return;
        default:
            cout << "������� ����!\n";
        }
    }
}