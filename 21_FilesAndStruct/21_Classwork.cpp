//#include <iostream>
//#include <fstream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//// Завдання 1
////Реалізувати структуру "Пральна машинка" (фірма, колір, ширина, довжина, висота, потужність, швидкість віджимання, температура нагрівання).Створіть екземпляр структури та проілюструйте роботу з ним.
//struct WashingMachine
//{
//    char brand[20];
//    char color[20];
//    double width;
//    double length;
//    double height;
//    double power;
//    double spinSpeed;
//    double heatingTemperature;
//
//    void Show()
//    {
//        cout << "Brand: " << brand << endl;
//        cout << "Color: " << color << endl;
//        cout << "Width: " << width << " cm" << endl;
//        cout << "Length: " << length << " cm" << endl;
//        cout << "Height: " << height << " cm" << endl;
//        cout << "Power: " << power << " W" << endl;
//        cout << "Spin Speed: " << spinSpeed << " rpm" << endl;
//        cout << "Heating Temperature: " << heatingTemperature << " °C" << endl;
//        cout << "------------------------" << endl;
//    }
//};
//
//void writeWashingMachineToFile(const char& filename)
//{
//    ofstream outFile(&filename, ios_base::app);
//    if (!outFile)
//    {
//        cout << "Error opening file for writing!" << endl;
//        return;
//    }
//
//    WashingMachine wm;
//    cout << "Enter brand: ";
//    cin >> wm.brand;
//    cout << "Enter color: ";
//    cin >> wm.color;
//    cout << "Enter width (cm): ";
//    cin >> wm.width;
//    cout << "Enter length (cm): ";
//    cin >> wm.length;
//    cout << "Enter height (cm): ";
//    cin >> wm.height;
//    cout << "Enter power (W): ";
//    cin >> wm.power;
//    cout << "Enter spin speed (rpm): ";
//    cin >> wm.spinSpeed;
//    cout << "Enter heating temperature (°C): ";
//    cin >> wm.heatingTemperature;
//
//    outFile << wm.brand << "\n" << wm.color << "\n" << wm.width << "\n" << wm.length << "\n"
//        << wm.height << "\n" << wm.power << "\n" << wm.spinSpeed << "\n" << wm.heatingTemperature << "\n";
//
//    outFile.close();
//    cout << "Washing machine added to file successfully!" << endl;
//}
//
//void readWashingMachinesFromFile(const char& filename)
//{
//    ifstream inFile(&filename);
//    if (!inFile)
//    {
//        cout << "Error opening file for reading!" << endl;
//        return;
//    }
//
//    cout << "Washing Machines in file: " << endl;
//    WashingMachine wm;
//    while (inFile >> wm.brand >> wm.color >> wm.width >> wm.length >> wm.height >> wm.power >> wm.spinSpeed >> wm.heatingTemperature)
//    {
//        wm.Show();
//    }
//
//    inFile.close();
//}
//
//void Menu_WashingMachine()
//{
//    cout << "Menu: " << endl;
//    cout << "1. Add washing machine to file" << endl;
//    cout << "2. Show washing machines from file" << endl;
//    cout << "3. Exit" << endl;
//    cout << "Enter your choice: ";
//}
//
////Завдання 2
////Реалізувати структуру "Праска" (фірма, модель, колір, мінімальна температура, максимальна температура, подача пари так / ні, потужність).Створіть екземпляр структури та проілюструйте роботу з ним.
//
//struct Iron
//{
//    char brand[20];
//    char model[20];
//    char color[20];
//    double minTemperature;
//    double maxTemperature;
//    char steamSupply[10];
//    double power;
//
//    void Show()
//    {
//        cout << "Brand: " << brand << endl;
//        cout << "Model: " << model << endl;
//        cout << "Color: " << color << endl;
//        cout << "Minimum Temperature: " << minTemperature << " °C" << endl;
//        cout << "Maximum Temperature: " << maxTemperature << " °C" << endl;
//        cout << "Steam Supply: " << steamSupply << endl;
//        cout << "Power: " << power << " W" << endl;
//        cout << "------------------------" << endl;
//    }
//};
//
//void writeIronToFile(const char& filename)
//{
//    ofstream outFile(&filename, ios_base::app);
//    if (!outFile)
//    {
//        cout << "Error opening file for writing!" << endl;
//        return;
//    }
//
//    Iron iron;
//    cout << "Enter brand: ";
//    cin >> iron.brand;
//    cout << "Enter model: ";
//    cin >> iron.model;
//    cout << "Enter color: ";
//    cin >> iron.color;
//    cout << "Enter minimum temperature (°C): ";
//    cin >> iron.minTemperature;
//    cout << "Enter maximum temperature (°C): ";
//    cin >> iron.maxTemperature;
//    cout << "Enter steam supply (Yes/No): ";
//    cin >> iron.steamSupply;
//    cout << "Enter power (W): ";
//    cin >> iron.power;
//
//    outFile << iron.brand << "\n" << iron.model << "\n" << iron.color << "\n"
//        << iron.minTemperature << "\n" << iron.maxTemperature << "\n"
//        << iron.steamSupply << "\n" << iron.power << "\n";
//
//    outFile.close();
//    cout << "Iron added to file successfully!" << endl;
//}
//
//void readIronsFromFile(const char& filename)
//{
//    ifstream inFile(&filename);
//    if (!inFile)
//    {
//        cout << "Error opening file for reading!" << endl;
//        return;
//    }
//
//    cout << "Irons in file: " << endl;
//    Iron iron;
//    while (inFile >> iron.brand >> iron.model >> iron.color >> iron.minTemperature
//        >> iron.maxTemperature >> iron.steamSupply >> iron.power)
//    {
//        iron.Show();
//    }
//
//    inFile.close();
//}
//
//void Menu_Iron()
//{
//    cout << "Menu: " << endl;
//    cout << "1. Add iron to file" << endl;
//    cout << "2. Show irons from file" << endl;
//    cout << "3. Exit" << endl;
//    cout << "Enter your choice: ";
//}
////Завдання 3
////Реалізувати структуру "Бойлер" (фірма, колір, потужність, об'єм, температура нагріву). Створіть екземпляр структури та проілюструйте роботу з ним.
//struct Boiler
//{
//    char brand[20];    
//    char color[20];
//    double power;
//    double volume;
//    double maxTemperature;   
//    
//
//    void Show()
//    {
//        cout << "Brand: " << brand << endl;        
//        cout << "Color: " << color << endl;
//        cout << "Power: " << power << " W" << endl;
//        cout << "Volume: " << volume << "m3" << endl;
//        cout << "Maximum Temperature: " << maxTemperature << " °C" << endl;       
//        
//        cout << "------------------------" << endl;
//    }
//};
//
//void writeBoilerToFile(const char& filename)
//{
//    ofstream outFile(&filename, ios_base::app);
//    if (!outFile)
//    {
//        cout << "Error opening file for writing!" << endl;
//        return;
//    }
//
//    Boiler boiler;
//    cout << "Enter brand: ";
//    cin >> boiler.brand;  
//    cout << "Enter color: ";
//    cin >> boiler.color;
//    cout << "Enter power (W): ";
//    cin >> boiler.power;
//    cout << "Enter volume: ";
//    cin >> boiler.volume;
//    cout << "Enter maximum temperature (°C): ";
//    cin >> boiler.maxTemperature;
//
//
//
//    outFile << boiler.brand << "\n" << boiler.color << "\n" << boiler.power << "\n"
//        << boiler.volume << "\n" << boiler.maxTemperature << "\n";
//
//    outFile.close();
//    cout << "Boiler added to file successfully!" << endl;
//}
//
//void readBoilersFromFile(const char& filename)
//{
//    ifstream inFile(&filename);
//    if (!inFile)
//    {
//        cout << "Error opening file for reading!" << endl;
//        return;
//    }
//
//    cout << "Boilers in file: " << endl;
//    Boiler boiler;
//    while (inFile >> boiler.brand >> boiler.color >> boiler.power >> boiler.volume
//        >> boiler.maxTemperature )
//    {
//        boiler.Show();
//    }
//
//    inFile.close();
//}
//
//void Menu_Boiler()
//{
//    cout << "Menu: " << endl;
//    cout << "1. Add Boiler to file" << endl;
//    cout << "2. Show Boilers from file" << endl;
//    cout << "3. Exit" << endl;
//    cout << "Enter your choice: ";
//}
//
////Завдання 4
////Розробити структуру, яка описує тварину(назва, клас, кличка).Створити функції для роботи з цією структурою :
////
////Заповнення об'єкта;
////Виведення на екран даних про об'єкт;
////Функція "Подати голос".
//
//struct Animal
//{
//    char name[30];  
//    char type[30]; 
//    char nickname[30];  
//
//    void Fill()
//    {
//        cout << "Enter animal's name: ";
//        cin >> name;
//        cout << "Enter animal's class/type: ";
//        cin >> type;
//        cout << "Enter animal's nickname: ";
//        cin >> nickname;
//    }
//
//    void Display()
//    {
//        cout << "Animal's Name: " << name << endl;
//        cout << "Class/Type: " << type << endl;
//        cout << "Nickname: " << nickname << endl;
//    }
//
//    void Speak()
//    {
//        cout << nickname << " says: ";
//        if (string(type) == "dog") {
//            cout << "Woof!" << endl;
//        }
//        else if (string(type) == "cat") {
//            cout << "Meow!" << endl;
//        }
//        else if (string(type) == "bird") {
//            cout << "Chirp!" << endl;
//        }
//        else {
//            cout << "*Unfamiliar sound*" << endl;
//        }
//    }
//};
//
//void writeAnimalToFile(const char& filename)
//{
//    ofstream outFile(&filename, ios_base::app);
//    if (!outFile)
//    {
//        cout << "Error opening file for writing!" << endl;
//        return;
//    }
//
//    Animal animal;
//    animal.Fill();
//
//    outFile << animal.name << "\n" << animal.type << "\n" << animal.nickname << "\n";
//    outFile.close();
//    cout << "Animal added to file successfully!" << endl;
//}
//
//void readAnimalsFromFile(const char& filename)
//{
//    ifstream inFile(&filename);
//    if (!inFile)
//    {
//        cout << "Error opening file for reading!" << endl;
//        return;
//    }
//
//    cout << "Animals in file: " << endl;
//    Animal animal;
//    while (inFile >> animal.name >> animal.type >> animal.nickname)
//    {
//        animal.Display();
//        animal.Speak();
//        cout << "------------------------" << endl;
//    }
//
//    inFile.close();
//}
//
//
//
//void Menu_Animal()
//{
//    cout << "Menu:" << endl;
//    cout << "1. Add animal to file" << endl;
//    cout << "2. Show animals from file" << endl;
//    cout << "3. Exit" << endl;
//    cout << "Enter your choice: ";
//
//}
//
//void main()
//{
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    const char filename_washmachines[21] = "washing_machines.txt";
//    int choice_Washmachines;
//    // Task 01
//    cout << "Task 01";
//    do
//    {
//        Menu_WashingMachine();
//        cin >> choice_Washmachines;
//        switch (choice_Washmachines)
//        {
//        case 1:
//            writeWashingMachineToFile(*filename_washmachines);
//            break;
//        case 2:
//            readWashingMachinesFromFile(*filename_washmachines);
//            break;
//        case 3:
//            cout << "Exiting..." << endl;
//            break;
//        default:
//            cout << "Enter correct number!" << endl;
//            break;
//        }
//    } while (choice_Washmachines != 3);
//    
//    //Task 02
//    cout << "Task 02";
//    const char filename_irons[20] = "irons.txt";
//    int choice_irons;
//
//    do
//    {
//        Menu_Iron();
//        cin >> choice_irons;
//        switch (choice_irons)
//        {
//        case 1:
//            writeIronToFile(*filename_irons);
//            break;
//        case 2:
//            readIronsFromFile(*filename_irons);
//            break;
//        case 3:
//            cout << "Exiting..." << endl;
//            break;
//        default:
//            cout << "Enter correct number!" << endl;
//            break;
//        }
//    } while (choice_irons != 3);
//
//    // Task 03 - аналогічно попереднім
//
//    // Task 04
//    Animal animal; 
//    const char filename_animal[20] = "animals.txt";
//
//    int choice_animal;
//
//    do
//    {
//        Menu_Animal();
//        cin >> choice_animal;
//        switch (choice_animal)
//        {
//        case 1:
//            writeAnimalToFile(*filename_animal);
//            break;
//        case 2:
//            readAnimalsFromFile(*filename_animal);
//            break;
//        case 3:
//            cout << "Exiting..." << endl;
//            return;
//        default:
//            cout << "Enter correct number!" << endl;
//            break;
//
//        }
//    } while (choice_animal != 3);
//}