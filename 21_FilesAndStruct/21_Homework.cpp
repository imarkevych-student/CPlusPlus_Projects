#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

struct Book {
    string title;
    string author;
    double price;

    void addBook() {
        ofstream file("books.txt", ios::app);
        cout << "������ ����� �����: ";
        cin >> title;
        cout << "������ ������: ";
        cin >> author;
        cout << "������ ����: ";
        cin >> price;
        file << title << "," << author << "," << price << endl;
        file.close();
        cout << "����� ������!\n";
    }

    bool fileExists(const string& filename) {
        ifstream file(filename);
        return file.good();
    }

    bool isFileEmpty(const string& filename) {
        ifstream file(filename, ios::ate);
        return file.tellg() == 0;
    }

    void listBooks() {
        if (!fileExists("books.txt") || isFileEmpty("books.txt")) {
            cout << "���� �� ���� ��� �������.\n";
            return;
        }
        ifstream file("books.txt");
        string line;
        cout << "������ ����:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }

    void searchByAuthor(const string& authorToSearch) {
        if (!fileExists("books.txt") || isFileEmpty("books.txt")) {
            cout << "���� �� ���� ��� �������.\n";
            return;
        }
        ifstream file("books.txt");
        string line;
        cout << "���������� ������:\n";
        bool found = false;
        while (getline(file, line)) {
            if (line.find(authorToSearch) != string::npos) {
                cout << line << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "���� ����� ������ �� ��������.\n";
        }
        file.close();
    }

    void deleteBook(const string& titleToDelete) {
        if (!fileExists("books.txt") || isFileEmpty("books.txt")) {
            cout << "���� �� ���� ��� �������.\n";
            return;
        }
        ifstream file("books.txt");
        ofstream temp("temp.txt");
        string line;
        bool deleted = false;
        while (getline(file, line)) {
            if (line.find(titleToDelete) == string::npos) {
                temp << line << endl;
            }
            else {
                deleted = true;
            }
        }
        file.close();
        temp.close();
        remove("books.txt");
        rename("temp.txt", "books.txt");
        if (deleted) {
            cout << "����� ��������!\n";
        }
        else {
            cout << "����� �� ��������.\n";
        }
    }

    void calculateAveragePrice() {
        if (!fileExists("books.txt") || isFileEmpty("books.txt")) {
            cout << "���� �� ���� ��� �������.\n";
            return;
        }
        ifstream file("books.txt");
        string line;
        double total = 0, count = 0, avg = 0;
        while (getline(file, line)) {
            size_t pos = line.rfind(",");
            double price = stod(line.substr(pos + 1));
            total += price;
            count++;
        }
        file.close();
        if (count > 0) {
            avg = total / count;
        }
        cout << "������� ���� ����: " << avg << endl;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Book book;
    int choice;
    do {
        cout << "����:\n";
        cout << "1. ������ �����\n";
        cout << "2. ������� ������ ����\n";
        cout << "3. ����� ����� �� �������\n";
        cout << "4. �������� ����� �� ������\n";
        cout << "5. ���������� ������� ���� ����\n";
        cout << "6. �����\n";
        cout << "��� ����: ";
        cin >> choice;
        switch (choice) {
        case 1: book.addBook(); break;
        case 2: book.listBooks(); break;
        case 3: {
            string author;
            cout << "������ ������: ";
            cin >> author;
            book.searchByAuthor(author);
            break;
        }
        case 4: {
            string title;
            cout << "������ ����� ����� ��� ���������: ";
            cin >> title;
            book.deleteBook(title);
            break;
        }
        case 5: book.calculateAveragePrice(); break;
        }
    } while (choice != 6);
    return 0;
}