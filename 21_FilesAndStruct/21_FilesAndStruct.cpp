//#include <iostream>
//#include <fstream>
//#include <string>
//#include <windows.h> // for Sleep function
////#include <string>
////#define SIZE 100
//using namespace std;
//
//struct Student
//{
//    char name[20];
//    char surname[20];
//    int age;
//    int group;
//    double grade;
//
//    void Show()
//    {
//        cout << "Name: " << name << endl;
//        cout << "Surname: " << surname << endl;
//        cout << "Age: " << age << endl;
//        cout << "Group: " << group << endl;
//        cout << "Grade: " << grade << endl;
//        cout << "------------------------" << endl;
//        //cout << SIZE << endl;
//    }
//};
//
//void writeStudentsToFile(const char& filename)
//{
//    ofstream outFile(&filename, ios_base::app);
//    if (!outFile)
//    {
//        cout << "Error opening file for writing!" << endl; return;
//    }
//    Student s;
//    //cin.ignore();
//    cout << "Enter name : ";
//    cin >> s.name;
//    cout << "Enter surname : ";
//    cin >> s.surname;
//    cout << "Enter age : ";
//    cin >> s.age;
//    cout << "Enter group : ";
//    cin >> s.group;
//    cout << "Enter grade : ";
//    cin >> s.grade;
//
//    outFile << s.name << "\n" << s.surname << "\n" << s.age << "\n" << s.group << "\n" << s.grade << "\n";
//    outFile.close();
//    cout << "Student was added to file successfully! " << endl;
//}
//
//void readStudentsFromFile(const char& filename)
//{
//    ifstream inFile(&filename);
//    if (!inFile)
//    {
//        cout << "Error opening file for reading!" << endl; return;
//    }
//    cout << "Students in file: " << endl;
//    Student s;
//    while (inFile >> s.name >> s.surname >> s.age >> s.group >> s.grade)
//    {
//        inFile.ignore();
//        //Sleep(2000);
//        s.Show();
//        //Sleep(2000);
//    }
//    /*int i = 0;
//    while (!inFile.eof())
//    {
//        inFile >> s.name;
//        inFile.ignore();
//        inFile >> s.surname;
//        inFile.ignore();
//        inFile >> s.age;
//        inFile.ignore();
//        inFile >> s.group;
//        inFile.ignore();
//        inFile >> s.grade;
//        inFile.ignore();
//        inFile.ignore();
//        s.Show();
//        i++;
//    }*/
//
//    inFile.close();
//}
//void Menu()
//{
//    cout << "Menu: " << endl;
//    cout << "1. Add student to file" << endl;
//    cout << "2. Show students from file" << endl;
//    cout << "3. Exit" << endl;
//    cout << "Enter your choice: ";
//}
//
//
//int main()
//{
//
//    const char filename[20] = { "students.txt" };
//    int choice;
//    do
//    {
//
//        Menu();
//        cin >> choice;
//        switch (choice)
//        {
//        case 1:writeStudentsToFile(*filename); break;
//        case 2:readStudentsFromFile(*filename); break;
//        case 3: cout << "Exiting..." << endl; return 0;
//
//        default:cout << "Enter correct number!" << endl; break;
//        }
//    } while (choice != 3);
//
//}