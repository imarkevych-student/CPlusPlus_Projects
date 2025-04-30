//#include <iostream>
//#include <Windows.h>
//#include <string>
//using namespace std;
//
////Для масиву вагонів створити окрему структуру
////з наступними полями :
////struct Vagon
////    номер вагону
////    кількість місць
////    кількість пасажирів
////    class Train
////    Створити клас Потяг.У класі оголосити поля(змінні члени класу) :
////    модель
////    кількість вагонів
////    вказівник на масив вагонів(динамічний).Vagon* vagon;
////В класі потяг оголосити дефолтний конструктор
////і перезавантажений конструктор.
////Реалізувати метод Show()
////Реалізувати метод додавання вагону до динамічного масиву
////Реалізувати метод - додати 1 пасажира у вагон
////Реалізувати конструктор копіювання
//
//struct Vagon {
//    int number;         
//    int places;         
//    int passengers;     
//};
//
//class Train {
//private:
//    string model;
//    int countVagons;
//    Vagon* vagons;
//
//public:    
//    Train() {
//        model = "Noname";
//        countVagons = 0;
//        vagons = nullptr;
//    }
//
//    Train(string m, int n) {
//        model = m;
//        countVagons = n;
//        vagons = new Vagon[n];
//        for (int i = 0; i < n; i++) {
//            vagons[i] = { i + 1, 50, rand() % 50 };
//        }
//    }
//    
//    Train(const Train& other) {
//        this->model = other.model;
//        this->countVagons = other.countVagons;
//        this->vagons = new Vagon[countVagons];
//        for (int i = 0; i < countVagons; i++) {
//            this->vagons[i] = other.vagons[i];
//        }
//    }
//
//    void addVagon(int places, int passengers) {
//        countVagons++; 
//        Vagon* temp = new Vagon[countVagons]; 
//              
//        for (int i = 0; i < countVagons - 1; i++) {
//            temp[i] = vagons[i];
//        }
//               
//        temp[countVagons - 1] = { countVagons, places, passengers };
//                
//        if (vagons != nullptr) {
//            delete[] vagons;
//        }        
//        vagons = temp;
//    }
//
//    void addPassengerToVagon(int vagonNumber) {
//        if (vagonNumber > 0 && vagonNumber <= countVagons) {
//            if (vagons[vagonNumber - 1].passengers < vagons[vagonNumber - 1].places) {
//                vagons[vagonNumber - 1].passengers++;
//            }
//            else {
//                cout << "Вагон #" << vagonNumber << " заповнений!" << endl;
//            }
//        }
//        else {
//            cout << "Невірний номер вагону!" << endl;
//        }
//    }
//
//    void Show() const {
//        cout << "Модель потяга: " << model << endl;
//        cout << "Кількість вагонів: " << countVagons << endl;
//        for (int i = 0; i < countVagons; i++) {
//            cout << "Вагон #" << vagons[i].number
//                << " - Місця: " << vagons[i].places
//                << ", Пасажири: " << vagons[i].passengers << endl;
//        }
//    }
//
//    ~Train() {
//        delete[] vagons;
//    }
//};
//
//void main() {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    srand(time(0));
//    
//    string modelT;
//    int countV;
//    cout << "Введіть модель потягу:";
//    cin >> modelT;
//    cout << "Введіть кількість вагонів:";
//    cin >> countV;
//
//    Train train(modelT, countV);
//    train.Show();
//
//    cout << "Додаємо вагон..." << endl;
//    int countPl;
//    int countPass;
//    cout << "Введіть кількість місць:";
//    cin >> countPl;
//    cout << "Введіть кількість пасажирів:";
//    cin >> countPass;
//    train.addVagon(countPl, countPass);
//    train.Show();
//
//    int numVag;
//    cout << "Введіть номер вагону:";
//    cin >> numVag;
//    cout << "Додаємо пасажира у вагон #" << numVag << "..." << endl;
//    train.addPassengerToVagon(numVag);
//    train.Show();
//}