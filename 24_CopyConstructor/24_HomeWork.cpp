#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

//������� ���� Array � �� ���� ���������� ������ ����� � ������ ������������. 
// ������������� ����� ���� �������� �� ��� �����(long* arr) �� ���� �������� �����(int size).
//���� ������� ��������� ��������� ���������� :
//� ��������� ����� ����������(�����������, � ��������� ��� � �� ������������)
//� ³��������� ���� ������
//� �������� ������� � �����
//� �������� ������� � ������(�� �������� ��� �� �������)
//� ³���������� �����(�� �������� / ���������)
//� ��������� ��������(��������, ����������� ��� ������ �����������)
//����� ����������� ���� ������������ :
//� ����������� �� �������������, ���� �������������� �������� ��������
//� �����������, ���� ���������� ����� ������ �� ������������� ����� �� ��������
//� ����������� ���������, ���� ���� �������� �� ��� ��'���� ��������� �����
//����� ���������� ���������� � ���� ��� ��������� ������ �����.��������� ������ �������(��������� �� ��������� ��������, ������� ����� � ��.)

class Array
{
private:
    long* arr;
    int size;

public:
    Array() : arr(nullptr), size(0) {};

    Array(int newSize) : size(newSize) {
        arr = new long[size];
        for (int i = 0; i < size; ++i)
        {
            arr[i] = 0;
        }
    }

    Array(const Array* other) : size(other->size) {
        arr = new long[size];
        for (int i = 0; i < size; i++) 
        {
            arr[i] = other->arr[i];
        }
    }
	
    ~Array() {
        delete [] arr;
    }

    void fillFromKeyboard(){
        cout << "������ " << size << "�����: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void fillRandom() {
        for (int i = 0; i < size; ++i)
        {
            arr[i] = rand () % 90 + 10;
        }
    }

    void display() const{
        if (size == 0) {
            cout << "����� �������." << endl;
            return;
        }
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void addElement(long value) {
        long* newArr = new long[size + 1];
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }

        newArr[size] = value;
        delete [] arr;
        arr = newArr;
        size++;
    }

    void removeByValue(long value) {
        int newSize = size;
        for (int i = 0; i < size; ++i)
        {
            if (arr[i]==value)
            {
                newSize--;
            }
        }

        if (newSize == size) return;

        long* newArr = new long[newSize];
        int index = 0;
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] != value)
            {
                newArr[index++] = arr[i];
            }
        }
        delete[] arr;
        arr = newArr;
        size = newSize;
    }

    void removeByIndex(int index) {
        if (index < 0 || index >= size) return;

        long* newArr = new long[size - 1];
        for (int i = 0; i < index; ++i)
        {
            newArr[i] = arr[i];
        }
        
        for (int i = index; i < size-1; ++i)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        size--;
    }

    void sortArray(bool acsending = true) {
        for (int i = 0; i < size - 1; ++i) 
        { 
            for (int j = i + 1; j < size; ++j)
            {
                if ((acsending && arr[i] > arr[j]) || (!acsending && arr[i] < arr[j]))
                {
                    long temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }

            }
        }
    }
    long getMin() const {
        if (size == 0) return 0;
        long min = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }

    long getMax() const {
        if (size == 0) return 0;
        long max = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    double getAverage() const {
        if (size == 0) return 0;
        long sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum * 1.0 / size;
    }

};


void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0));

    Array arr(5);
    arr.fillRandom();
    arr.display();
    arr.addElement(10);
    arr.display();
    arr.removeByValue(10);
    arr.display();
    arr.sortArray(false);
    arr.display();

    cout << "̳�������: " << arr.getMin() << endl;
    cout << "�����������: " << arr.getMax() << endl;
    cout << "������: " << arr.getAverage() << endl;

    
}