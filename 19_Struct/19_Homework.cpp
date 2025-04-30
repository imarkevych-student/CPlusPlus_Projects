#include <iostream>
#include <Windows.h>
using namespace std;

struct Book {
    char title[50];
    char author[50];
    char publisher[50];
    char genre[50];
   
    void print() const {
        cout << "Назва: " << title << ", Автор: " << author
            << ", Видавництво: " << publisher << ", Жанр: " << genre << endl;
    }
    
    void edit() {
        cout << "Редагування книги:\n";
        cout << "Введіть нову назву: ";
        cin.ignore();
        cin.getline(title, 50);
        cout << "Введіть нового автора: ";
        cin.getline(author, 50);
        cout << "Введіть нове видавництво: ";
        cin.getline(publisher, 50);
        cout << "Введіть новий жанр: ";
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
        cout << "Книги автора \"" << author << "\" не знайдено.\n";
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
        cout << "Книгу з назвою \"" << title << "\" не знайдено.\n";
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
        cout << "\nМеню:\n";
        cout << "1. Редагувати книгу\n";
        cout << "2. Друк усіх книг\n";
        cout << "3. Пошук книги за автором\n";
        cout << "4. Пошук книги за назвою\n";
        cout << "5. Сортування за назвою\n";
        cout << "6. Сортування за автором\n";
        cout << "7. Сортування за видавництвом\n";
        cout << "8. Вихід\n";
        cout << "Оберіть опцію: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            int index;
            cout << "Введіть номер книги для редагування (1-10): ";
            cin >> index;
            if (index >= 1 && index <= SIZE) {
                books[index - 1].edit();
            }
            else {
                cout << "Невірний номер книги!\n";
            }
            break;
        }
        case 2:
            printAllBooks(books, SIZE);
            break;
        case 3: {
            char author[50];
            cout << "Введіть автора для пошуку: ";
            cin.ignore();
            cin.getline(author, 50);
            searchByAuthor(books, SIZE, author);
            break;
        }
        case 4: {
            char title[50];
            cout << "Введіть назву для пошуку: ";
            cin.ignore();
            cin.getline(title, 50);
            searchByTitle(books, SIZE, title);
            break;
        }
        case 5:
            sortByTitle(books, SIZE);
            cout << "Книги відсортовано за назвою.\n";
            break;
        case 6:
            sortByAuthor(books, SIZE);
            cout << "Книги відсортовано за автором.\n";
            break;
        case 7:
            sortByPublisher(books, SIZE);
            cout << "Книги відсортовано за видавництвом.\n";
            break;
        case 8:
            cout << "Вихід із програми.\n";
            return;
        default:
            cout << "Невірний вибір!\n";
        }
    }
}