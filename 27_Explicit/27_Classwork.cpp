#include <iostream>
#include <cstdlib> 
#include <Windows.h>
using namespace std;

//Завдання 1:
//Створіть клас Array – це клас динамічного масиву чисел з певним функціоналом.Властивостями класа буде вказівник на сам масив(long* arr) та його теперішній розмір(int size).
//Клас повинен дозволяти наступний функціонал :
//· Заповнити масив значеннями(випадковими, з клавіатури, по замовчуванню(заповнити масив 0))
//· Відображати вміст масиву
//· Додавати елемент в масив
//· Видаляти елемент з масива(по значенню або по індексу)
//· Відсортувати масив(по спаданню / зростанню)
//· Визначати значення(мінімальне, максимальне та середнє арифметичне)
//Також передбачити набір конструкторів :
//· Конструктор за замовчуванням, який встановлювтиме початкові значення(заповнити масив 0))
//· Конструктор, який прийматиме розмір масиву та заповнюватиме нулем всі елементи
//· Конструктор копіювання, який буде копіювати всі дані об'єкта включаючи масив
//Також реалізувати деструктор в класі для уникнення втрати пам’яті.Врахувати можливі помилки(видалення не існуючого елемента, порожній масив і тд.).Успіхів!
//Всі методі, які не змінюють оригінал мають бути CONST, create explicit constructor

class Array {
    long* arr;
    int size;

public:
   
    Array() {
        arr = nullptr;
        size = 0;
    }

    explicit Array(int size) {
        this->size = size;
        this->arr = new long[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = 0;
        }
    }   
    Array(const Array& other) {
        this->size = other.size;
        this->arr = new long[size];
        for (int i = 0; i < size; ++i) {
            this->arr[i] = other.arr[i];
        }
    }

    ~Array() {
        if (arr != nullptr) {
            delete[] arr;
        }
    }   
    int getSize() const {
        return size;
    }

    void displayArray() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void fillRandom() {
        if (size == 0) {
            cout << "Масив порожній!" << endl;
            return;
        }
        for (int i = 0; i < size; ++i) {
            arr[i] = (rand() % 100); 
        }
    }   

    void fillFromKeyboard() {
        if (size == 0) {
            cout << "Масив порожній!" << endl;
            return;
        }
        for (int i = 0; i < size; ++i) {
            cout << "Введіть елемент [" << i << "]: ";
            cin >> arr[i];
        }
    }
    void addElement(long value) {
        long* newArr = new long[size + 1];
        for (int i = 0; i < size; ++i) {
            newArr[i] = arr[i]; 
        }
        newArr[size] = value; 
        size++; 
        delete[] arr;
        arr = newArr;
    }
    
    void removeElementByValue(long value) {
        int index = -1;
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout << "Елемент зі значенням " << value << " не знайдено!" << endl;
            return;
        }

        long* newArr = new long[size - 1];
        for (int i = 0, j = 0; i < size; ++i) {
            if (i != index) {
                newArr[j++] = arr[i]; 
            }
        }
        size--; 
        delete[] arr; 
        arr = newArr; 
    }
    void sortArray(bool ascending = true) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                    long temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp; 
                }
            }
        }
    }
    
    long getMin() const {
        if (size == 0) {
            cout << "Масив порожній!" << endl;
            return -1; 
        }
        long min = arr[0]; 
        for (int i = 1; i < size; ++i) {
            if (arr[i] < min) {
                min = arr[i]; 
            }
        }
        return min;
    }
    long getMax() const {
        if (size == 0) {
            cout << "Масив порожній!" << endl;
            return -1;
        }
        long max = arr[0]; 
        for (int i = 1; i < size; ++i) {
            if (arr[i] > max) {
                max = arr[i]; 
            }
        }
        return max;
    }
    double getAverage() const {
        if (size == 0) {
            cout << "Масив порожній!" << endl;
            return -1.0; 
        }
        long sum = 0; 
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return static_cast<double>(sum) / size; 
    }

};

void Display(const Array& arr) {
    arr.displayArray();
}

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));

    int size = 5;
    Array arr(size);

    arr.fillRandom();
    cout << "Масив після заповнення випадковими числами:" << endl;
    arr.displayArray();

    
    long newElement = 99;
    arr.addElement(newElement);
    cout << "Масив після додавання елемента " << newElement << ":" << endl;
    arr.displayArray();

    
    long removeValue = -20; 
    cout << "Спроба видалення елемента зі значенням " << removeValue << ":" << endl;
    arr.removeElementByValue(removeValue);
    arr.displayArray();

   
    arr.sortArray(true); 
    cout << "Масив після сортування за зростанням:" << endl;
    arr.displayArray();

    arr.sortArray(false); 
    cout << "Масив після сортування за спаданням:" << endl;
    arr.displayArray();
    
    cout << "Мінімальне значення в масиві: " << arr.getMin() << endl;
    cout << "Максимальне значення в масиві: " << arr.getMax() << endl;
    cout << "Середнє арифметичне значення в масиві: " << arr.getAverage();
}