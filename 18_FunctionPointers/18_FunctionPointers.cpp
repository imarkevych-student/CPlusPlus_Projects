//#include <iostream>
////#include <functional>
//using namespace std;
//
//int one(int value, int value2)
//{
//	cout << "Hello one from inner function" << value + value2;
//	return value + value2;
//}
//void two()
//{
//	cout << "Hello world";
//}
//
//void three()
//{
//	cout << "Hello three";
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int division(int a, int b)
//{
//	return a / b;
//}
//int multy(int a, int b)
//{
//	return a * b;
//}
//auto sub(int a, int b) -> int
//{
//	if (a % 2 == 0)
//	{
//		return a + b;
//	}
//	else
//	{
//		return false;
//	}
//	return a - b;
//}
//template <typename T1>
//void ShowSomeInfo(T1(*somePtr)(T1, T1))
//{
//	somePtr(12, 12);
//}
//
//
//
//
//int main()
//{
//	auto onePtr = one;
//	ShowSomeInfo<int>(onePtr);
//	cout << "\n";
//
//
//
//
//	auto num = sub(10, 5);
//	cout << num << "\n";
//
//	int x = 1.2;
//	auto j = x;
//	cout << "J : " << j << "\n";
//
//	decltype(x) z = 2.25;
//	cout << "Z : " << z << "\n";
//
//
//	auto ptr = add;
//	cout << " Sum : " << ptr(10, 13);
//
//	//int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//
//
//
//
//	//int(*pFunc[4])(int, int) = { add, sub, multy, division };
//	//cout << pFunc[2](10, 5) << "\n"; // == add(10, 5)
//	//int x = 6, y = 2;
//	//char c = '+';
//
//	while (c != ' ')
//	{
//		cout << "Enter operation: ";
//		cin >> c;
//		switch (c)
//		{
//		case '+':
//			pFunc = add;
//			//cout << "Sum of numbers : " << pFunc(x, y) << "\n";
//			break;
//		case '-':
//			pFunc = sub;
//			//cout << "Sub of numbers : " << pFunc(x, y) << "\n";
//			break;
//		case '*':
//			pFunc = multy;
//			//cout << "Multy of numbers : " << pFunc(x, y) << "\n";
//			break;
//		default:
//			break;
//		}
//		cout << "Result: " << pFunc(x, y) << "\n";
//	}
//
//
//	//   int a = 10;
//	   //int* aptr = &a;
//
//	   ////typeOfFunction (int, void, float) (*nameOfPtr)(int, int, double, double) = &nameOfFunction;
//	   //void (*ptrOne)();
//	   //ptrOne = two;
//	   //ptrOne();
//	   //ptrOne = three;
//	   //ptrOne();
//	   //int (*ptrToFunc)(int, char) = one;
//	   //cout << ptrToFunc(10, 'a') << endl;
//
//
//
//}