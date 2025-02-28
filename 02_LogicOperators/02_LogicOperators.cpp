#include <iostream>
using namespace std;


int main()
{
    //operators 
    //унарні оператори  +5 -8
    //бінарні оператори + - * / %   2 + 2
	//тернарні оператори
    /*
    //Інкремент і декремент
    int a = 5;
    cout << "a = " << a << endl;
    //Інкремент ++ ---> +=1
    //Інкремент постфіксної форми
    a++;//a += 1;//a = a + 1;
    cout << "a = " << a << endl;
    ////Інкремент префіксної форми
    ++a;
    cout << "a = " << a << endl;

    //декремент -- ---> -=1
    //Інкремент постфіксної форми
    a--;// a -= 1;//a = a - 1;
    cout << "a = " << a << endl;
    ////декремент префіксної форми
    --a;
    cout << "a = " << a << endl;

    int b = 7;
    cout << ++b << endl;//<------------------
    cout << b++ << endl;//---------------->
    cout << b << endl;

    int x = 10;
    cout << "x = " << x << endl;
    x += 12;//x = x + 12;
    cout << "x = " << x << endl;
    x -= 12;//x = x - 12;
    cout << "x = " << x << endl;
    x *= 12;//x = x *12;
    cout << "x = " << x << endl;
    x /= 12;//x = x / 12;
    cout << "x = " << x << endl;
    x %= 12;//x = x % 12;
    cout << "x = " << x << endl;

    //1. Звужуюче перетворення
    int A = 23.5;
    cout << "A = " << A << endl;

    //2. Розширююче перетворення.
    double num = 3.33;
    cout << "num = " << num << endl;
    //Класифікація за способом здійснення перетворення
    //1. Неявне перетворення.
    int B = 23.5;
    cout << "B = " << B << endl;

    //2. Явне перетворення
    double g = 37.4;//37.40000000000000000
    float h = g;//37.40000000
    float l = (int)g;//37.00000000


    //float number;
    //cout << "Enter number : ";
    //cin >> number;
    //float res = number / 100.0;
    //cout << "Res = " << res << endl;

    //Уніфікована ініціалізація

    //int d = { 11.3 };
    //cout << "d = " << d << endl;

    /*1. Оператори порівняння;
    2. Оператори рівності;
    3. Логічні оператори об'єднання та негативна інверсія.

    cout << (5 > 3) << endl;//true == 1
    cout << (3 < 2) << endl;//false == 0
    cout << (5 != 3) << endl;;
    cout << (3 == 2) << endl;;
    */
    /*
    if (true)
    {
        //дія 1;
    }
    else
    {
        //дія 2;
    }

    float a, b;
    cout << "Enter number a : ";
    cin >> a;
    cout << "Enter number b : ";
    cin >> b;
    float res;
    if (b == 0) 
    {
        cout << "You can*t divide by zero!!!!" << endl;
    }
    else
    {
        res = a / b;
        cout << "Res = " << res << endl;
    }

    //Тернарний оператор
   //ТВЕРДЖЕННЯ АБО ВИРАЗ ? ДІЯ1 : ДІЯ2;
    (b == 0) ? cout << "You can*t divide by zero!!!!" << endl : cout << "Res = " << a / b << endl;
    (b != 0) ? cout << "Res = " << a / b << endl : cout << "You can*t divide by zero!!!!" << endl ;

    int x, y;
    int max, min;
    cout << "Enter number x : ";
    cin >> x;
    cout << "Enter number y : ";
    cin >> y;
    cout << "x = " << x << " y = " << y << endl;
    //if (x > y) 
    //{
    //    max = x;
    //}
    //else
    //{
    //    max = y;
    //}
    max =  (x > y) ? x : y;
    //if (x < y)
    //{
    //    min = x;
    //}
    //else
    //{
    //    min = y;
    //}
    min =  (x < y) ? x : y;
    cout << "max = " << max << " min = " << min << endl;

    int age;
    cout << "Enter age : ";
    cin >> age;
    if (age > 0 && age < 200)
    {
        cout << "Age is correct" << endl;
    }
    else
    {
        cout << "Error age" << endl;
    }
    */
    int month;
    cout << "Enter number of month : ";
    cin >> month;
    if (month == 1)
    {
        cout << "January " << endl;
    }
    else if (month == 2)
    {
        cout << "February  " << endl;
    }
    else if (month == 3)
    {
        cout << "March  " << endl;
    }
    else if (month == 4)
    {
        cout << "April  " << endl;
    }
    else if (month == 5)
    {
        cout << "May  " << endl;
    }
    else
    {
        cout << "Error month" << endl;
        cout << "Error month" << endl;
        cout << "Error month" << endl;
    }
    
     


}

