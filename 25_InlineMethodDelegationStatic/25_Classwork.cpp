//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
////Завдання 1 : Створіть додаток «Телефонна книга». Необхідно зберігати дані про абонента (ПІБ, домашній телефон, робочий телефон, мобільний телефон, 
//// додаткова інформація про контакт) всередині відповідного класу(Abonent).Наповніть клас змінними - членами, функціями - членами, конструкторами.
//// Створити статичну змінну для кількості абонентів.Використати делегування конструкторів.
//
//struct FullName {
//    string firstName;
//    string lastName;
//    string middleName;
//
//    string getFullName() const {
//        return firstName + " " + middleName + " " + lastName;
//    }
//};
//
//class Abonent {
//private:
//    FullName fullName; 
//    string homePhone;
//    string workPhone;
//    string mobilePhone;
//    string additionalInfo;
//
//    static int countAbonents;
//
//public:
//    
//    Abonent(FullName name, string home, string work, string mobile, string info)
//        : fullName(name), homePhone(home), workPhone(work), mobilePhone(mobile), additionalInfo(info) {
//        countAbonents++;
//    }
//
//    Abonent() : Abonent({ "Невідомо", "Невідомо", "Невідомо" }, "Невідомо", "Невідомо", "Невідомо", "Немає інформації") {}
//   
//    ~Abonent() {
//        countAbonents--;
//    }    
//    static int getCountAbonents() {
//        return countAbonents;
//    }    
//
//    string getInfo() const {
//        return "ПІБ: " + fullName.getFullName() + "\nДомашній телефон: " + homePhone +
//            "\nРобочий телефон: " + workPhone + "\nМобільний телефон: " + mobilePhone +
//            "\nДодаткова інформація: " + additionalInfo + "\n";
//    }
//
//    void display() const {
//        cout << getInfo() << endl;
//    }
//
//};
//
//int Abonent::countAbonents = 0;
//
// void main() 
// {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    
//    FullName name1 = { "Іван", "Іванов", "Іванович" };
//    Abonent a1(name1, "12345", "67890", "54321", "Друг дитинства");
//
//    FullName name2 = { "Петро", "Петренко", "Олександрович" };
//    Abonent a2(name2, "98765", "43210", "11111", "Колега");
//    
//    FullName name3 = { "Андрій", "Андрієнко", "Андрійович" };
//    Abonent a3(name3, "12345", "67890", "54321", "Друг дитинства");
//
//    FullName name4 = { "Микола", "Миколайчук", "Миколайович" };
//    Abonent a4(name4, "98765", "43210", "11111", "Колега");
//
//    cout << "\nКількість абонентів: " << Abonent::getCountAbonents() << endl;
//    
//    a1.display();
//    a2.display();
//    a3.display();
//    a4.display();
//}