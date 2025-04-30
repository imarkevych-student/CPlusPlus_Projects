//#include <iostream>
////#include <functional>
//using namespace std;
//// Створити масив вказівників на функції для калькулятора. Викликати функції в switch-case, в залежності від вибору користувача, саме з цього масиву через вказівники
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