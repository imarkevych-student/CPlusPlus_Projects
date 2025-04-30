#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

//�������� 1:
//�������� ���� Rectangle, ���� ���� ��������� �����������.���� ������ ������ : ������, ������, ������, ���� ������������ ����������� �� ����� �� ���������� ���������.
// ��� ���������� ��������� �������� ��������� Coord, ��� �������� X �� Y ����������.
//���� ������� ������ ������� ������������ :
//����������� �� ������������, ���� ��������������� �������� ���
//���������������� �����������, ���� ������ ���� �������� ������ �� �������� ��� ������ �� ������
//���������������� �����������, ���� ������ ��� ��������� ������� �� �������, �� ��������� �������� �ᒺ���
//�� ������� ������ :
//���� ������ �� �����, ���������� ������, �������� �� � ��������� �����������
//���� ������ ������������.����� ������ ��� �������� : 1 � ���� ������, 2 � ������
//���������� ������������.����� ������ ��� �������� : 1 � �������� ���������� �� �� X, 2 � �� �� Y
//������ ������ �������� �������� �� ���������� �����(�䒺��� ������, ���������� � ��).�������� ��������� �ᒺ��� �� ������������ ������� ������.
// ��������� ��� ���������
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
                cout << "������ �� ������ ���� ��'������!" << endl;
                return;
            }
            width = newWidth;
            height = newHeight;
        }    
        void moveRect(int deltaX, int deltaY) {
            int newX = coord.x + deltaX;
            int newY = coord.y + deltaY;

            if (newX < 0 || newY < 0) {
                cout << "���������� �� ������ ���� ��'������!" << endl;
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
    cout << "����������� �� �������������:" << endl;
    rect.displayRect();
    cout << "����������� �� �������������: Construct 1" << endl;
    rect1.displayRect();
    cout << "����������� �� �������������: Construct 2" << endl;
    rect2.displayRect();

    cout << "\n���� ������:" << endl;
    rect.resizeRect(15, 8); 
    rect.displayRect();

    cout << "\n����������:" << endl;
    rect.moveRect(5, 3); 
    rect.displayRect();    
}