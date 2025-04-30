//#include <iostream>
//using namespace std;
//
//inline void Hello()
//{
//	cout << "Hello" << endl;
//}
//struct PIB
//{
//	string name;
//	string surname;
//	string lastname;
//};
//struct Birthday
//{
//	int day;
//	int month;
//	int year;
//};
//struct University
//{
//	string name;
//	string city;
//	string country;
//};
//
//class Student
//{
//private:
//	PIB fullname;
//	Birthday birthday;
//	string phone;
//	string city;
//	string country;
//	University university;
//	string group;
//	int* marks;// pointer --> empty
//	int markCount;
//	float average;
//public:
//	//ctor + TAB 
//	Student()
//	{
//		cout << "Default constructor" << endl;
//		fullname.name = "no name";
//		fullname.surname = "no surname";
//		fullname.lastname = "no lastname";
//		birthday.day = 0;
//		birthday.month = 0;
//		birthday.year = 0;
//		phone = "no phone";
//		city = "no city";
//		country = "no country";
//		university.name = "no university_name";
//		university.city = "no university_city";
//		university.country = "no university_country";
//		group = "no group";
//		marks = nullptr;
//		markCount = 0;
//		average = 0;
//	}
//	Student(string name, string surname, string lastname)
//	{
//		cout << "Parametrized constructor" << endl;
//		fullname.name = name;
//		fullname.surname = surname;
//		fullname.lastname = lastname;
//		birthday.day = 0;
//		birthday.month = 0;
//		birthday.year = 0;
//		phone = "no phone";
//		city = "no city";
//		country = "no country";
//		university.name = "no university_name";
//		university.city = "no university_city";
//		university.country = "no university_country";
//		group = "no group";
//		marks = nullptr;
//		markCount = 0;
//		average = 0;
//
//	}
//	void Print() {
//		cout << fullname.name << endl;
//		cout << fullname.surname << endl;
//		cout << fullname.lastname << endl;
//		cout << birthday.day << endl;
//		cout << birthday.month << endl;
//		cout << birthday.year << endl;
//		cout << phone << endl;
//		cout << city << endl;
//		cout << country << endl;
//		cout << university.name << endl;
//		cout << university.city << endl;
//		cout << university.country << endl;
//		cout << group << endl;
//		cout << "Marks : ";
//		for (int i = 0; i < markCount; i++)
//		{
//			cout << marks[i] << " ";
//		}
//		cout << endl << markCount << endl;
//		cout << average << endl;
//
//	}
//	/*void Initialize()
//	{
//		fullname.name = "no name";
//		fullname.surname = "no surname";
//		fullname.lastname = "no lastname";
//		birthday.day = 0;
//		birthday.month = 0;
//		birthday.year = 0;
//		phone = "no phone";
//		city = "no city";
//		country = "no country";
//		university.name = "no university_name";
//		university.city = "no university_city";
//		university.country = "no university_country";
//		group = "no group";
//		marks = nullptr;
//		markCount = 0;
//		average = 0;
//	}*/
//	void SetName(string name)
//	{
//		fullname.name = name;
//	}
//	void SetSurName(string surname)
//	{
//		fullname.surname = surname;
//	}
//	void SetLastName(string lastname)
//	{
//		fullname.lastname = lastname;
//	}
//	//прототип методу 
//	void AddMark(int mark);
//	void setAverageMark();
//	void Delete()
//	{
//		if (marks != nullptr)
//			delete[] marks;
//	}
//	// ~ + Tab --> tulda
//	~Student()
//	{
//		cout << "Destructor" << fullname.name << endl;
//		if (marks != nullptr)
//			delete[] marks;
//	}
//};
//class Human
//{
//	string name;
//	int age;
//	int weight;
//	static int count_human;
//public:
//	//список ініціалізаторів
//	//Human() :name("no name"), age(0), weight(0) {}
//	//Human() :name{ "no name" }, age{ 0 }, weight{ 0 } {}	
//	Human()
//	{
//		name = "no name";
//		age = 0;
//		weight = 0;
//		count_human++;
//	}
//	Human(string name) :Human()
//	{
//		this->name = name;
//		/*age = 0;
//		weight = 0;*/
//	}
//	/*Human(int age)
//	{
//		this->name = "no name";
//		this->age = age;
//		weight = 0;
//	}
//	Human(int weight)
//	{
//		this->name = "no name";
//		this->age = 0;
//		this->weight = weight;
//	}*/
//	Human(string name, int age) :Human(name)
//	{
//		//this->name = name;
//		this->age = age;
//		//weight = 0;
//	}
//	/*Human(string name, int weight)
//	{
//		this->name = name;
//		this->age = 0;
//		this->weight = weight;
//	}*/
//	Human(string name, int age, int weight) :Human(name, age)
//	{
//		//this->name = name;
//		//this->age = age;
//		this->weight = weight;
//
//	}
//	/*Human(string name,  int weight, int age)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}*/
//	static int getCountHuman()
//	{
//		return count_human;
//	}
//	void Print()
//	{
//		cout << "Name : " << name << endl;
//		cout << "Age : " << age << endl;
//		cout << "Weight : " << weight << endl;
//	}
//	~Human()
//	{
//		count_human--;
//	}
//};
//
//int Human::count_human = 0;
//int main()
//{
//	cout << "Count human " << Human::getCountHuman() << endl;
//
//	Human h1;
//	h1.Print();
//	cout << h1.getCountHuman() << endl;
//
//	Human h2("Petro");
//	h2.Print();
//	cout << h2.getCountHuman() << endl;
//
//	Human h3("Tom", 18);
//	h3.Print();
//
//	if (true)
//	{
//		Human h4("Olga", 15, 55);
//		h4.Print();
//
//	}
//
//
//
//	cout << "Count human " << Human::getCountHuman() << endl;
//
//	//   cout << "Hello" << endl;//Hello();
//	//   cout << Hello << endl; 
//	//   
//	   //Student st;
//	   ////fullname.name = "New name";//st.SetName("New name");
//	   //st.Print();
//
//
//
//
//
//
//
//}
//
//void Student::AddMark(int mark)
//{
//	markCount++;
//	int* temp = new int[markCount];
//	for (int i = 0; i < markCount - 1; i++)
//	{
//		temp[i] = marks[i];
//	}
//	temp[markCount - 1] = mark;
//
//
//	if (marks != nullptr)
//		delete[] marks;
//
//	marks = temp;
//	setAverageMark();
//}
//
//void Student::setAverageMark()
//{
//	float sum = 0;
//	for (int i = 0; i < markCount; i++)
//	{
//		sum += marks[i];
//	}
//	average = (float)sum / markCount;
//}