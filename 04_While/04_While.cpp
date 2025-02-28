#include <iostream>
using namespace std;

int main()
{
	/*
	 ■ Цикл з передумовою(while);
	 ■ Цикл з постумовою(do...while);
	 ■ Цикл з параметрами(for).*/

	int counter = 0;
	while (counter < 7)
	{
		counter++;
		cout << "You have seen the " << counter <<
			" Wonder of the world!!!\n";
	}

	cout << "Now, you can begin your essay.\n";
	/*
	float a, b, res;
	int key;
	cout << "Choose the operation " << endl;
	cout << " [ 1] - if you want to add two numbers  " << endl;
	cout << " [ 2 ] - if you want to deduct two numbers  " << endl;
	cout << " [ 3 ] - if you want to muliply two numbers  " << endl;
	cout << " [ 4 ] - if you want to divide two numbers  " << endl;
	cout << " [ 0 ] - Exit  " << endl;
	cin >> key;//key = 1, key = 2,key = 3,key = 4
	//key --> number , char
	while (key != 0)
	{
		switch (key)
		{
		case 1:
			cout << "Enter first number a : ";	cin >> a;
			cout << "Enter second number b : ";	cin >> b;
			res = a + b;
			cout << "Answer : " << a << " + " << b << " = " << res << endl;
			break;
		case 2:
			cout << "Enter first number a : ";	cin >> a;
			cout << "Enter second number b : ";	cin >> b;
			res = a - b;
			cout << "Answer : " << a << " - " << b << " = " << res << endl;
			break;
		case 3:
			cout << "Enter first number a : ";	cin >> a;
			cout << "Enter second number b : ";	cin >> b;
			res = a * b;
			cout << "Answer : " << a << " * " << b << " = " << res << endl;
			break;
		case 4:
			cout << "Enter first number a : ";	cin >> a;
			cout << "Enter second number b : ";	cin >> b;
			if (b != 0)
			{
				res = a / b;
				cout << "Answer : " << a << " / " << b << " = " << res << endl;
			}
			else
			{
				cout << "\nError! You cannot divide by "
					"zero!\n";
			}
			break;
		case 0:
			cout << "Have a nice day " << endl;
			break;
		default:
			cout << "Error choice " << endl;
			break;
		}

		cout << "Choose the operation " << endl;
		cout << " [ 1] - if you want to add two numbers  " << endl;
		cout << " [ 2 ] - if you want to deduct two numbers  " << endl;
		cout << " [ 3 ] - if you want to muliply two numbers  " << endl;
		cout << " [ 4 ] - if you want to divide two numbers  " << endl;
		cout << " [ 0 ] - Exit  " << endl;
		cin >> key;
	}
	*/

	float a, b, res;
	int key;
	do
	{
		cout << "Choose the operation " << endl;
		cout << " [ 1] - if you want to add two numbers  " << endl;
		cout << " [ 2 ] - if you want to deduct two numbers  " << endl;
		cout << " [ 3 ] - if you want to muliply two numbers  " << endl;
		cout << " [ 4 ] - if you want to divide two numbers  " << endl;
		cout << " [ 0 ] - Exit  " << endl;
		cin >> key;
		switch (key)
		{
		case 1:
			cout << "Enter first number a : ";	cin >> a;
			cout << "Enter second number b : ";	cin >> b;
			res = a + b;
			cout << "Answer : " << a << " + " << b << " = " << res << endl;
			break;
		case 2:
			cout << "Enter first number a : ";	cin >> a;
			cout << "Enter second number b : ";	cin >> b;
			res = a - b;
			cout << "Answer : " << a << " - " << b << " = " << res << endl;
			break;
		case 3:
			cout << "Enter first number a : ";	cin >> a;
			cout << "Enter second number b : ";	cin >> b;
			res = a * b;
			cout << "Answer : " << a << " * " << b << " = " << res << endl;
			break;
		case 4:
			cout << "Enter first number a : ";	cin >> a;
			cout << "Enter second number b : ";	cin >> b;
			if (b != 0)
			{
				res = a / b;
				cout << "Answer : " << a << " / " << b << " = " << res << endl;
			}
			else
			{
				cout << "\nError! You cannot divide by "
					"zero!\n";
			}
			break;
		case 0:
			cout << "Have a nice day " << endl;
			break;
		default:
			cout << "Error choice " << endl;
			break;
		}





	} while (key !=0);
}

