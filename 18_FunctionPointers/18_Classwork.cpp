//#include <iostream>
////#include <functional>
//using namespace std;
//// ?? Завдання:
////Створіть функції для обробки рядків :
////
////void toUppercase(std::string& str) – переводить рядок у верхній регістр.
////
////void toLowercase(std::string& str) – переводить рядок у нижній регістр.
////
////void reverseString(std::string& str) – реверсує рядок.
////
////void capitalize(std::string& str) – робить першу літеру великою, а решту – маленькими.
////
////Оголосіть вказівник на функцію :
////
////typedef void (*StringOperation)(std::string&);
////
////Створіть функцію void processStrings(std::string arr[], int size, StringOperation op), яка приймає масив рядків і виконує передану операцію над кожним елементом.
////
////Реалізуйте вибір операції :
////
////Створіть масив із 5 рядків.
////
////Запропонуйте користувачеві вибрати одну з чотирьох операцій(змінити регістр, реверс тощо).
////
////Використовуйте processStrings для обробки всього масиву.
////
////Виведіть результати після обробки.
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int division(int a, int b)
//{
//	if (b == 0)
//	{
//		cout << "Division by zero";
//	}
//	return a / b;
//}
//int multy(int a, int b)
//{
//	return a * b;
//}
//int sub(int a, int b)
//{	
//	return a - b;
//}
//void main()
//{
//	int(*pFunc[4])(int, int) = { add, sub, multy, division };
//	
//	int a, b;
//	char c = '\0';
//
//	cout << "Enter number:";
//	cin >> a;
//	cout << "Enter number: ";
//	cin >> b;
//	
//	while (c != '0')
//	{
//		cout << "Enter operation: ";
//		cin >> c;
//		switch (c)
//		{
//		case '+':			
//			cout << "Sum of numbers : " << pFunc[0](a, b) << "\n";
//			break;
//		case '-':			
//			cout << "Sub of numbers : " << pFunc[1](a, b) << "\n";
//			break;
//		case '*':			
//			cout << "Multy of numbers : " << pFunc[2](a, b) << "\n";
//			break;
//		case '/':			
//			cout << "Divide of numbers : " << pFunc[3](a, b) << "\n";
//			break;
//		case '0':
//			c = '0';
//			break;
//		default:
//			cout << "Enter 0 to exit";		
//			break;
//		}		
//	}
//}