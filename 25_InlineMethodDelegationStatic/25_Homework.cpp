#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

 /*Завдання 2:(домашня робота)
class PhoneBook
{
    Abonent* abonents
        int countAbonent;
    void Add(Abonent a) {}
    void Delete(string phone) {}
    void SearchByName(string name) {}
    void SearchByPhone(string phone{}
        void ShowAll() {}
}
Надайте користувачеві можливість додавати нових абонентів,
видаляти абонентів,
шукати абонентів за ПІБ, показувати всіх абонентів.

*** зберігати інформацію в файл і завантажувати з файлу(записати у файл треба 1 абонента і
    зчитати з файлу треба 1 абонета).*/

struct FullName {
    string firstName;
    string lastName;
    string middleName;

    string getFullName() const {
        return firstName + " " + middleName + " " + lastName;
    }
};

class Abonent {
private:
    FullName fullName;
    string homePhone;
    string workPhone;
    string mobilePhone;
    string additionalInfo;

    static int countAbonents;

public:

    Abonent(FullName name, string home, string work, string mobile, string info)
        : fullName(name), homePhone(home), workPhone(work), mobilePhone(mobile), additionalInfo(info) {
        countAbonents++;
    }

    Abonent() : Abonent({ "Невідомо", "Невідомо", "Невідомо" }, "Невідомо", "Невідомо", "Невідомо", "Немає інформації") {}

    ~Abonent() {
        countAbonents--;
    }
    static int getCountAbonents() {
        return countAbonents;
    }

    string getInfo() const {
        return "ПІБ: " + fullName.getFullName() + "\nДомашній телефон: " + homePhone +
            "\nРобочий телефон: " + workPhone + "\nМобільний телефон: " + mobilePhone +
            "\nДодаткова інформація: " + additionalInfo + "\n";
    }

    void display() const {
        cout << getInfo() << endl;
    }

    string getName() const { return fullName.getFullName(); }
    string getHomePhone() const { return homePhone; }
    string getWorkPhone() const { return workPhone; }
    string getMobilePhone() const { return mobilePhone; }
    string getAdditionalInfo() const { return additionalInfo; }
   
    void saveToFile(ofstream& file) const {
        file << fullName.firstName << endl;  
        file << fullName.middleName << endl; 
        file << fullName.lastName << endl;    
        file << homePhone << endl;          
        file << workPhone << endl;         
        file << mobilePhone << endl;        
        file << additionalInfo << endl;     
    }
   
    void loadFromFile(ifstream& file) {
        getline(file, fullName.firstName); 
        getline(file, fullName.middleName); 
        getline(file, fullName.lastName);   
        getline(file, homePhone);           
        getline(file, workPhone);           
        getline(file, mobilePhone);         
        getline(file, additionalInfo);      
    }
};

class PhoneBook {
private:
    Abonent* abonents;
    int countAbonents;

public:   
    PhoneBook() : abonents(nullptr), countAbonents(0) {}

    ~PhoneBook() {
        delete[] abonents;
    }

    void Add(const Abonent& a) {
        Abonent* temp = new Abonent[countAbonents + 1];
        for (int i = 0; i < countAbonents; ++i) {
            temp[i] = abonents[i];
        }
        temp[countAbonents] = a;
        countAbonents++;

        delete[] abonents;
        abonents = temp;
    }
    
    void Delete(const string& phone) {
        int index = -1;
        for (int i = 0; i < countAbonents; ++i) {
            if (abonents[i].getHomePhone() == phone || abonents[i].getWorkPhone() == phone || abonents[i].getMobilePhone() == phone) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Абонент з телефоном " << phone << " не знайдений!" << endl;
            return;
        }

        Abonent* temp = new Abonent[countAbonents - 1];
        for (int i = 0, j = 0; i < countAbonents; ++i) {
            if (i != index) {
                temp[j++] = abonents[i];
            }
        }

        countAbonents--;
        delete[] abonents;
        abonents = temp;
    }
    
    void SearchByName(const string& name) const {
        for (int i = 0; i < countAbonents; ++i) {
            if (abonents[i].getName() == name) {
                abonents[i].display();
                return;
            }
        }
        cout << "Абонент з ім'ям " << name << " не знайдений!" << endl;
    }
    
    void SearchByPhone(const string& phone) const {
        for (int i = 0; i < countAbonents; ++i) {
            if (abonents[i].getHomePhone() == phone || abonents[i].getWorkPhone() == phone || abonents[i].getMobilePhone() == phone) {
                abonents[i].display();
                return;
            }
        }
        cout << "Абонент з телефоном " << phone << " не знайдений!" << endl;
    }
    
    void ShowAll() const {
        if (countAbonents == 0) {
            cout << "Телефонна книга порожня!" << endl;
            return;
        }
        for (int i = 0; i < countAbonents; ++i) {
            cout << "Абонент #" << (i + 1) << ":" << endl;
            abonents[i].display();
            cout << "------------------------" << endl;
        }
    }
    
    void SaveToFile(const string& filename, const Abonent& a) const {
        ofstream file(filename, ios::app);
        if (!file.is_open()) {
            cout << "Помилка відкриття файлу для запису!" << endl;
            return;
        }
        a.saveToFile(file);
        file.close();
    }

    void LoadFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "Помилка відкриття файлу для читання!" << endl;
            return;
        }
        Abonent a;
        a.loadFromFile(file);
        Add(a);
        file.close();
    }
};


int Abonent::countAbonents = 0;

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    PhoneBook phoneBook;
   
    FullName name1 = { "Іван", "Іванов", "Іванович" };
    phoneBook.Add(Abonent(name1, "12345", "67890", "54321", "Друг дитинства"));

    FullName name2 = { "Петро", "Петренко", "Олександрович" };
    phoneBook.Add(Abonent(name2, "98765", "43210", "11111", "Колега"));
    
    cout << "Телефонна книга:" << endl;
    phoneBook.ShowAll();
    
    phoneBook.SearchByName("Іван Іванов");
    phoneBook.SearchByPhone("54321");
    
    phoneBook.Delete("12345");
    cout << "Після видалення:" << endl;
    phoneBook.ShowAll();
   
    FullName name3 = { "Олександр", "Олександров", "Олександрович" };
    Abonent newAbonent(name3, "22222", "33333", "44444", "Новий контакт");

    phoneBook.SaveToFile("PhoneBook.txt", newAbonent);
    phoneBook.LoadFromFile("PhoneBook.txt");
    cout << "Після завантаження з файлу:" << endl;
    phoneBook.ShowAll();

}