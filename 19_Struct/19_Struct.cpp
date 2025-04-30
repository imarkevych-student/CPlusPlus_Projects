//#include <iostream>
//using namespace std;
//
//struct date
//{
//	int day;
//	int month;
//	int year;
//};
//
//struct point
//{
//	int x;
//	int y;
//};
//struct rectangle
//{
//	int width = 0;
//	int heigth = 0;
//	point startPoint;
//	void Show()
//	{
//		for (int i = 0; i < width; i++)
//		{
//			for (int j = 0; j < heigth; j++)
//			{
//				cout << "*";
//			}cout << "\n";
//		}
//	}
//};
//
//struct student
//{
//	char name[20];
//	char surname[20];
//	int marks[10];
//	char group[10];
//	int salary;
//	date birthday;
//	date hiredate;
//
//
//	void Show()
//	{
//		cout << "Name : " << name << endl;
//		cout << "Surname : " << surname << endl;
//		cout << "Group : " << group << endl;
//		cout << "Birthday : " << birthday.day << "/" << birthday.month << "/" << birthday.year << endl;
//		cout << "Salary : " << salary << endl;
//		cout << "Hire date : " << hiredate.day << "/" << hiredate.month << "/" << hiredate.year << endl;
//	}
//	void InitStudent()
//	{
//		cout << "Enter the name : ";
//		cin >> name;
//		cout << "Enter the surname : ";
//		cin >> surname;
//		cout << "Enter the group : ";
//		cin >> group;
//		cout << "Enter the birthday day : ";
//		cin >> birthday.day;
//		cout << "Enter the birthday month : ";
//		cin >> birthday.month;
//		cout << "Enter the birthday year : ";
//		cin >> birthday.year;
//		cout << "Enter the salary : ";
//		cin >> salary;
//		cout << "Enter the hire date day : ";
//		cin >> hiredate.day;
//		cout << "Enter the hire date month : ";
//		cin >> hiredate.month;
//		cout << "Enter the hire date year : ";
//		cin >> hiredate.year;
//	}
//};
//
//void InitStudent(student& st)
//{
//	cout << "Enter the name : ";
//	cin >> st.name;
//	cout << "Enter the surname : ";
//	cin >> st.surname;
//	cout << "Enter the group : ";
//	cin >> st.group;
//	cout << "Enter the birthday day : ";
//	cin >> st.birthday.day;
//	cout << "Enter the birthday month : ";
//	cin >> st.birthday.month;
//	cout << "Enter the birthday year : ";
//	cin >> st.birthday.year;
//
//	student* pStudent = &st;
//	cout << *pStudent->name << endl;
//	cout << "Enter the salary : ";
//	cin >> pStudent->salary;
//
//
//}
//
//student InitStudent()
//{
//	student st;
//	cout << "Enter the name : ";
//	cin >> st.name;
//	cout << "Enter the surname : ";
//	cin >> st.surname;
//	cout << "Enter the group : ";
//	cin >> st.group;
//	cout << "Enter the birthday day : ";
//	cin >> st.birthday.day;
//	cout << "Enter the birthday month : ";
//	cin >> st.birthday.month;
//	cout << "Enter the birthday year : ";
//	cin >> st.birthday.year;
//
//	student* pStudent = &st;
//	cout << *pStudent->name << endl;
//	cout << "Enter the salary : ";
//	cin >> pStudent->salary;
//	return st;
//
//}
//void Show(student student1)
//{
//	cout << "Name : " << student1.name << " Surname : " << student1.surname << " Group : " << student1.group << " Birthday : " << student1.birthday.day << "/" << student1.birthday.month << "/" << student1.birthday.year << " Salary :" << student1.salary << " Hire date : " << student1.hiredate.day << "/" << student1.hiredate.month << endl;
//}
//int main()
//{
//
//
//	rectangle rect1{ 10,10 };
//	rect1.Show();
//	//int arr[10]{ 1,2,3,4,5 };
//	student student1{};
//	student student2{};
//	student student3{};
//	student student4{};
//	cout << "Size of student1 is : " << sizeof(student1) << endl;
//	cout << "Size of student2 is : " << sizeof(student2) << endl;
//	cout << "Size of student3 is : " << sizeof(student3) << endl;
//	student1.InitStudent();
//	student1.Show();
//
//
//
//	/*InitStudent(student1);
//	student2 = InitStudent();
//	Show(student1);
//	Show(student2);*/
//
//	//int day = 10;//copy
//	//short day1(3333333);//direct
//	//int day2{ 43443434 };//uniform
//
//	//date date1{ 2003,4,12,35,"April" };
//	//cout << "date1 is " << date1.day << "/" << date1.month << "/" << date1.year << endl;
//	//cout << "date1 is " << date1.mon_name << " and week day is : " << date1.weekday<< endl;
//	/*int choice;
//	cout << "Enter choice: ";
//	cin >> choice;*/
//	/*date date1;
//	cout << "Enter the day : ";
//	cin >> date1.day;
//	cout << "Enter the month : ";
//	cin >> date1.month;
//	cout << "Enter the year : ";
//	cin >> date1.year;
//	cout << "Enter the weekday : ";
//	cin >> date1.weekday;
//	cout << "Enter the month name : ";
//	cin >> date1.mon_name;
//	cout << "You entered " << date1.day << "/" << date1.month << "/" << date1.year << endl;
//	cout << "You entered " << date1.mon_name << " and week day is : " << date1.weekday << endl;*/
//}