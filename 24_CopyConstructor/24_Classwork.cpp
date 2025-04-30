//#include <iostream>
//#include <Windows.h>
//#include <string>
//using namespace std;
//
////��� ������ ������ �������� ������ ���������
////� ���������� ������ :
////struct Vagon
////    ����� ������
////    ������� ����
////    ������� ��������
////    class Train
////    �������� ���� �����.� ���� ��������� ����(���� ����� �����) :
////    ������
////    ������� ������
////    �������� �� ����� ������(���������).Vagon* vagon;
////� ���� ����� ��������� ��������� �����������
////� ���������������� �����������.
////���������� ����� Show()
////���������� ����� ��������� ������ �� ���������� ������
////���������� ����� - ������ 1 �������� � �����
////���������� ����������� ���������
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
//                cout << "����� #" << vagonNumber << " ����������!" << endl;
//            }
//        }
//        else {
//            cout << "������� ����� ������!" << endl;
//        }
//    }
//
//    void Show() const {
//        cout << "������ ������: " << model << endl;
//        cout << "ʳ������ ������: " << countVagons << endl;
//        for (int i = 0; i < countVagons; i++) {
//            cout << "����� #" << vagons[i].number
//                << " - ̳���: " << vagons[i].places
//                << ", ��������: " << vagons[i].passengers << endl;
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
//    cout << "������ ������ ������:";
//    cin >> modelT;
//    cout << "������ ������� ������:";
//    cin >> countV;
//
//    Train train(modelT, countV);
//    train.Show();
//
//    cout << "������ �����..." << endl;
//    int countPl;
//    int countPass;
//    cout << "������ ������� ����:";
//    cin >> countPl;
//    cout << "������ ������� ��������:";
//    cin >> countPass;
//    train.addVagon(countPl, countPass);
//    train.Show();
//
//    int numVag;
//    cout << "������ ����� ������:";
//    cin >> numVag;
//    cout << "������ �������� � ����� #" << numVag << "..." << endl;
//    train.addPassengerToVagon(numVag);
//    train.Show();
//}