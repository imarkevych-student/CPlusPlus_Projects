//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//void main()
//{
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//   /* 1.Вивести на екран цілі числа від 1 до 100. - while
//    2.Вивести на екран додатні парні числа, які не перевищують 200, та їх кількість. - while
//    3.Дано N(N > 0).Вводяться N чисел.Знайти суму парних серед цих чисел. - while
//    4.Вводяться 10 чисел.Знайти суму та середнє арифметичне цих чисел. - while
//    5.Вивести на екран цілі числа : 100 99 98 97...3 2 1. - do..while
//    6.Написати програму яка обчислює суму семи чисел, які вводяться з клавіатури. - do..while*/
//
//    //Task1
//    /*int i = 1;
//    while (i >=1 && i <=100)
//    {
//        cout << i << " ";
//        i++;
//    }
//    cout << endl;*/
//    
//    //Task2
//   /* int i = 0;
//    while (i >=0 && i <=200)
//    {
//        cout << i << " ";
//        i+=2;
//    }
//    cout << endl;*/
//    
//    //3.Дано N(N > 0).Вводяться N чисел.Знайти суму парних серед цих чисел. - while
//    /*int N = 0;
//    int num,suma;
//    cout << "Введіть кількість чисел:";
//    cin >> N;
//
//    int i = 0;
//    while (i >=0 && i <=N)
//    {
//        cout << "Введіть число:";
//        cin >> num;
//        cout << endl;
//        if (num % 2 == 0)
//            suma += num;       
//        i++;
//    }
//    cout << "Сума парних чисел: " << suma << endl;*/
//
//    //4.Вводяться 10 чисел.Знайти суму та середнє арифметичне цих чисел. - while
//    /*int N = 10;
//    int num,suma;
//
//    int i = 0;
//    while (i <=N)
//    {
//        cout << "Введіть число:";
//        cin >> num;
//        cout << endl;       
//        suma += num;       
//        i++;
//    }
//    cout << "Середнє арифметичне чисел: " << suma/N << endl;*/
//    
//    //5.Вивести на екран цілі числа : 100 99 98 97...3 2 1. - do..while
//    /*int i=100;
//    do
//    {
//        cout << i << " ";
//        i--;
//    } while (i >= 1);
//    
//    cout << endl;  */
//    
//    /*int N = 7;
//    int num, suma;
//    int i=N;
//    do
//    {
//        cout << "Введіть число:";
//        cin >> num;
//        cout << endl;
//        suma += num;       
//        i--;
//
//    } while (i >= 1);
//    
//    cout << "Сума чисел: " << suma << endl;*/
//
//    //1. Дано країна.Вивести назву столиці. (5 countries)
//   /* enum Country {Ukraine, Germany, France, Italy, Japan, Unknown };
//
//     int country;
//    cout << "Введіть назву однієї з наступних країн: Ukraine - 0 , Germany - 1 , France - 2, Italy - 3, Japan - 4" << endl;
//    cout << "Країна: ";
//    cin >> country;
//
//    switch (country) {
//    case Ukraine:
//        cout << "Столиця України: Київ" << endl;
//        break;
//    case Germany:
//        cout << "Столиця Німеччини: Берлін" << endl;
//        break;
//    case France:
//        cout << "Столиця Франції: Париж" << endl;
//        break;
//    case Italy:
//        cout << "Столиця Італії: Рим" << endl;
//        break;
//    case Japan:
//        cout << "Столиця Японії: Токіо" << endl;
//        break;
//    default:
//        cout << "Країну не знайдено у списку." << endl;
//    }*/
//
////2.Дано номер дня тижня(1 – понеділок і т.д.).Визначити чи це вихідний день.
//   /* int day;
//    cout << "Введіть номер дня тижня (1 – понеділок, 2 – вівторок, ... , 7 – неділя): ";
//    cin >> day;
//
//    switch (day) {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        cout << "Це робочий день." << endl;
//        break;
//    case 6:
//    case 7:
//        cout << "Це вихідний день." << endl;
//        break;
//    default:
//        cout << "Невірний номер дня тижня." << endl;
//    }*/
//
//    //.Дано тварина(номер тварини. 1 – жираф. 2 – орел.тощо). (7 animals) Вивести клас, до якого відноситься тварина(хижак, травоїдна).
//
//    int animal;
//    cout << "Введіть номер тварини (1 – жираф, 2 – орел, 3 – лев, 4 – слон, 5 – акула, 6 – корова, 7 – вовк): ";
//    cin >> animal;
//
//    switch (animal) {
//    case 1:
//        cout << "Жираф - Травоїдна" << endl;
//        break;
//    case 2:
//        cout << "Орел - Хижак" << endl;
//        break;
//    case 3:
//        cout << "Лев - Хижак" << endl;
//        break;
//    case 4:
//        cout << "Слон - Травоїдна" << endl;
//        break;
//    case 5:
//        cout << "Акула - Хижак" << endl;
//        break;
//    case 6:
//        cout << "Корова - Травоїдна" << endl;
//        break;
//    case 7:
//        cout << "Вовк - Хижак" << endl;
//        break;
//    default:
//        cout << "Невірний номер тварини." << endl;
//    }
//}
