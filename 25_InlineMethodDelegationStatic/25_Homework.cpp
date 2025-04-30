#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

 /*�������� 2:(������� ������)
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
������� ������������ ��������� �������� ����� ��������,
�������� ��������,
������ �������� �� ϲ�, ���������� ��� ��������.

*** �������� ���������� � ���� � ������������� � �����(�������� � ���� ����� 1 �������� �
    ������� � ����� ����� 1 �������).*/

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

    Abonent() : Abonent({ "�������", "�������", "�������" }, "�������", "�������", "�������", "���� ����������") {}

    ~Abonent() {
        countAbonents--;
    }
    static int getCountAbonents() {
        return countAbonents;
    }

    string getInfo() const {
        return "ϲ�: " + fullName.getFullName() + "\n������� �������: " + homePhone +
            "\n������� �������: " + workPhone + "\n�������� �������: " + mobilePhone +
            "\n��������� ����������: " + additionalInfo + "\n";
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
            cout << "������� � ��������� " << phone << " �� ���������!" << endl;
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
        cout << "������� � ��'�� " << name << " �� ���������!" << endl;
    }
    
    void SearchByPhone(const string& phone) const {
        for (int i = 0; i < countAbonents; ++i) {
            if (abonents[i].getHomePhone() == phone || abonents[i].getWorkPhone() == phone || abonents[i].getMobilePhone() == phone) {
                abonents[i].display();
                return;
            }
        }
        cout << "������� � ��������� " << phone << " �� ���������!" << endl;
    }
    
    void ShowAll() const {
        if (countAbonents == 0) {
            cout << "��������� ����� �������!" << endl;
            return;
        }
        for (int i = 0; i < countAbonents; ++i) {
            cout << "������� #" << (i + 1) << ":" << endl;
            abonents[i].display();
            cout << "------------------------" << endl;
        }
    }
    
    void SaveToFile(const string& filename, const Abonent& a) const {
        ofstream file(filename, ios::app);
        if (!file.is_open()) {
            cout << "������� �������� ����� ��� ������!" << endl;
            return;
        }
        a.saveToFile(file);
        file.close();
    }

    void LoadFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "������� �������� ����� ��� �������!" << endl;
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
   
    FullName name1 = { "����", "������", "��������" };
    phoneBook.Add(Abonent(name1, "12345", "67890", "54321", "���� ���������"));

    FullName name2 = { "�����", "��������", "�������������" };
    phoneBook.Add(Abonent(name2, "98765", "43210", "11111", "������"));
    
    cout << "��������� �����:" << endl;
    phoneBook.ShowAll();
    
    phoneBook.SearchByName("���� ������");
    phoneBook.SearchByPhone("54321");
    
    phoneBook.Delete("12345");
    cout << "ϳ��� ���������:" << endl;
    phoneBook.ShowAll();
   
    FullName name3 = { "���������", "�����������", "�������������" };
    Abonent newAbonent(name3, "22222", "33333", "44444", "����� �������");

    phoneBook.SaveToFile("PhoneBook.txt", newAbonent);
    phoneBook.LoadFromFile("PhoneBook.txt");
    cout << "ϳ��� ������������ � �����:" << endl;
    phoneBook.ShowAll();

}