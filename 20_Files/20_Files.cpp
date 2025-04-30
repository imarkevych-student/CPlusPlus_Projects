//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
////struct student
////{
////    char name[50];
////	long group;//44444 - 32576 - + 32576/ 32457346537846538746 //8bytes - 2 bytes = 6 bytes
////	double grade;
////};
////
////union//8 bytes
////{
////	string component1;
////	float component2;
////	long long component3;
////} myUnion;
////
////struct statusFields
////{
////	unsigned int isOn : 2;//-22764575675 + 22764575675; 0 - 45728768765
////	unsigned int JS : 1;
////	unsigned int isReady : 1;
////};
//
//int main()
//{
//
//	fstream file;
//	file.open("text.txt", ios::in | ios::out | ios::app);
//
//	cout << "Hello world" << "\n";
//
//	ofstream fout("text.txt", ios::in | ios::out | ios::app);
//
//	fout.open("text.txt");
//	if (!fout)
//		cout << "Error opening file" << endl;
//	/*while(!fout.eof())
//	{
//
//	}*/
//	else
//	{
//		fout << "Hello world";
//		cout << "File opened successfully" << endl;
//	}
//
//	fout.close();
//
//	char buffer[100];
//	ifstream fin;
//	fin.open("text.txt");
//
//	//string str, str2;
//	//fin >> buffer;
//	fin.getline(buffer, 100);
//	//FILE* file = fopen("text.txt", "r");
//	/*while (!fin.eof())
//	{
//		fin >> str;
//		str2 += str;
//	}*/
//
//
//	//cout << str2 << endl;
//	fin.close();
//
//	/*int number;
//	cin >> number;*/
//
//	/*myUnion.component1 = 5;
//	cout << "Component1: " << myUnion.component1 << " Size : " << sizeof(myUnion) << endl;
//	myUnion.component2 = 10;
//	cout << "Component2: " << myUnion.component2 << " Size : " << sizeof(myUnion) << endl;
//	cout << "Component1: " << myUnion.component1 << " Size : " << sizeof(myUnion) << endl;
//	myUnion.component3 = 15;
//	cout << "Component3: " << myUnion.component3 << " Size : " << sizeof(myUnion) << endl;
//	cout << "Component2: " << myUnion.component2 << " Size : " << sizeof(myUnion) << endl;
//	cout << "Component1: " << myUnion.component1 << " Size : " << sizeof(myUnion) << endl;*/
//
//
//	/*student s;
//	s.name[0] = 'A';
//	s.group = 222;
//	s.grade = 5.5;
//
//	cout << "Name: " << s.name << endl;
//	cout << "Group: " << s.group << endl;
//	cout << "Grade: " << s.grade << endl;*/
//
//
//}