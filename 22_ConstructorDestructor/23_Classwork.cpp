#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

//Завдання 1:
//Створити клас Rectangle, який буде описувати прямокутник.Клас містить розміри : ширина, висота, символ, який відображатиме прямокутник на екрані та координати розміщення.
// Для збереження координат створити структуру Coord, яка міститиме X та Y координату.
//Клас повинен містити наступні конструктори :
//Конструктор по замовчуванню, який встановлюватиме «дефолтні» дані
//Параметризований конструктор, який приймає один параметр «розмір» та ініціалізує ним ширину та висоту
//Параметризований конструктор, який приймає два параметри «ширину» та «висоту», які являються розмірами об’єкта
//Та наступні методи :
//Вивід фігури на екран, відповідного розміру, символом та у відповідних координатах
//Зміна розміру прямокутника.Метод приймає два парметри : 1 – зміна висоти, 2 – ширини
//Переміщення прямокутника.Метод приймає два парметри : 1 – величина переміщення по осі X, 2 – по осі Y
//Методи повинні включати перевірку на коректність даних(від’ємна ширина, координати і тд).Створити екземпляр об’єкту та протестувати написаті методи.
// Структура для координат
struct Coord 
{
    int x, y;

    Coord(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
};

class Rect 
{
    private:
        int width, height;
        char symbol;
        Coord coord;

    public:    
        Rect()
        {
            width = 10;
            height = 5;
            symbol = '*';
            coord = Coord(0, 0);
        }
        Rect(int size) {
            width = size;
            height = size;
            symbol = '#';
            coord = Coord(0, 0);
        }
        Rect(int w, int h) {
            width = w;
            height = h;
            symbol = '*';
            coord = Coord(0, 0);
        }
   
        void displayRect() const {
            for (int i = 0; i < coord.y; ++i) {
                cout << endl;
            }
            for (int i = 0; i < height; ++i) {
                cout << string(coord.x, ' ') << string(width, symbol) << endl;
            }
            cout << endl;
        }    
        void resizeRect(int newWidth, int newHeight) {
            if (newWidth < 0 || newHeight < 0) {
                cout << "Розміри не можуть бути від'ємними!" << endl;
                return;
            }
            width = newWidth;
            height = newHeight;
        }    
        void moveRect(int deltaX, int deltaY) {
            int newX = coord.x + deltaX;
            int newY = coord.y + deltaY;

            if (newX < 0 || newY < 0) {
                cout << "Координати не можуть бути від'ємними!" << endl;
                return;
            }
            coord.x = newX;
            coord.y = newY;
        }
};

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    Rect rect;
    Rect rect1(5);
    Rect rect2(10,8);
    cout << "Прямокутник за замовчуванням:" << endl;
    rect.displayRect();
    cout << "Прямокутник за замовчуванням: Construct 1" << endl;
    rect1.displayRect();
    cout << "Прямокутник за замовчуванням: Construct 2" << endl;
    rect2.displayRect();

    cout << "\nЗміна розміру:" << endl;
    rect.resizeRect(15, 8); 
    rect.displayRect();

    cout << "\nПереміщення:" << endl;
    rect.moveRect(5, 3); 
    rect.displayRect();    
}