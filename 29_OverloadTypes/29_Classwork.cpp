#include <iostream>
using namespace std;
#include <Windows.h>

/// ТЕМА: OPERATORS OVERLOADING
//Завдання 1 :
//    Створити клас Airplane(літак), який буде мати наступні характеристики :
//• Модель
//• Тип
//• Кількість пасажирів
//• Максимальна кількість пасажирів
//За допомогою перевантаження операторів реалізувати :
//1. Перевірку на рівність типів літаків(операція == ) friend
//2. Збільшення і зменшення пасажирів в салоні літака(операції ++ та --
//    в префіксній формі)
//    3. Порівняння двох літаків по максимально можливій кількості пасажирів
//    на борту(операція > ) friend
//    4. Збільшити кількість пасажирів на певне значення(оператор(15))
//    Перевантаження логічних операцій виконати за допомогою дружніх функцій.
//    При виконанні операцій, потрібно перевіряти чи не перебільшено максимальну
//    кількість пасажирів.
//    !Результат завантажити у вигляді.cpp файла.

class Airplane
{
private:	
	string	model;
	string type;
	int pessengers;
	int maxPessengers;

public:
	Airplane(string model, string type, int pessengers, int maxPessengers)
		: model(model), type(type), pessengers(pessengers), maxPessengers(maxPessengers) {	};

	friend bool operator ==(const Airplane& a1, const Airplane& a2) {
		return a1.type == a2.type;
	}

};



void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

	Airplane airlane1("Boeing 747", "Commercial", 150, 300);
	Airplane airlane2("Airbus A320", "Commercial", 120, 200);

	if (airlane1 == airlane2)
	{
		cout << "Літаки однакового типу\n";
	}
	else 
	{
		cout << "Літаки різного типу\n";
	}
}