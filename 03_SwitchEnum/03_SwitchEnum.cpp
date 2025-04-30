//#include <iostream>
//using namespace std;
//
//int main()
//{
//    /* Examle 1
//   
//    float a, b, res;
//    cout << "Enter first number a : ";
//    cin >> a;
//    cout << "Enter second number b : ";
//    cin >> b;
//
//    char key;
//    cout << "Choose the operation " << endl;
//    cout << " [ + ] - if you want to add two numbers  " << endl;
//    cout << " [ - ] - if you want to deduct two numbers  " << endl;
//    cout << " [ * ] - if you want to muliply two numbers  " << endl;
//    cout << " [ / ] - if you want to divide two numbers  " << endl;
//    cin >> key;//key = '+', key = '-',key = '*',key = '/'
//
//    if (key == '+')
//    {
//        res = a + b;
//        cout << "Answer : " << a << " + " << b << " = " << res << endl;
//    }
//    else if (key == '-')
//    {
//        res = a - b;
//        cout << "Answer : " << a << " - " << b << " = " << res << endl;
//    }
//    else if (key == '*')
//    {
//        res = a * b;
//        cout << "Answer : " << a << " * " << b << " = " << res << endl;
//    }
//    else if (key == '/')
//    {
//        if (b != 0)
//        {
//            res = a / b;
//            cout << "Answer : " << a << " / " << b << " = " << res << endl;
//        }
//        else
//        {
//            cout << "\nError! You cannot divide by "
//                "zero!\n";
//        }
//       
//    }
//    else
//    {
//        cout << "Error choice " << endl;
//    }
//     */
//
//    //Examle 2
//
//    /*   float a, b, res;
//    cout << "Enter first number a : ";
//    cin >> a;
//    cout << "Enter second number b : ";
//    cin >> b;
//
//    int key;
//    cout << "Choose the operation " << endl;
//    cout << " [ 1] - if you want to add two numbers  " << endl;
//    cout << " [ 2 ] - if you want to deduct two numbers  " << endl;
//    cout << " [ 3 ] - if you want to muliply two numbers  " << endl;
//    cout << " [ 4 ] - if you want to divide two numbers  " << endl;
//    cin >> key;//key = 1, key = 2,key = 3,key = 4
//
//    if (key == 1)
//    {
//        res = a + b;
//        cout << "Answer : " << a << " + " << b << " = " << res << endl;
//    }   
//    else if (key == 2)
//    {
//        res = a - b;
//        cout << "Answer : " << a << " - " << b << " = " << res << endl;
//    }
//    else if (key == 3)
//    {
//        res = a * b;
//        cout << "Answer : " << a << " * " << b << " = " << res << endl;
//    }
//    else if (key == 4)
//    {
//        if (b != 0)
//        {
//            res = a / b;
//            cout << "Answer : " << a << " / " << b << " = " << res << endl;
//        }
//        else
//        {
//            cout << "\nError! You cannot divide by "
//                "zero!\n";
//        }
//
//    }
//    else
//    {
//        cout << "Error choice " << endl;
//    }
//    */ 
//    
//    /*Examle 3
//    float a, b, res;
//    cout << "Enter first number a : ";
//    cin >> a;
//    cout << "Enter second number b : ";
//    cin >> b;
//
//    int key;
//    cout << "Choose the operation " << endl;
//    cout << " [ 1] - if you want to add two numbers  " << endl;
//    cout << " [ 2 ] - if you want to deduct two numbers  " << endl;
//    cout << " [ 3 ] - if you want to muliply two numbers  " << endl;
//    cout << " [ 4 ] - if you want to divide two numbers  " << endl;
//    cin >> key;//key = 1, key = 2,key = 3,key = 4
//    //key --> number , char
//    switch (key)
//    {
//    case 1:
//        res = a + b;
//        cout << "Answer : " << a << " + " << b << " = " << res << endl;
//        break;
//    case 2:
//        res = a - b;
//        cout << "Answer : " << a << " - " << b << " = " << res << endl;
//        break;
//    case 3:
//        res = a * b;
//        cout << "Answer : " << a << " * " << b << " = " << res << endl;
//        break;
//    case 4:
//        if (b != 0)
//        {
//            res = a / b;
//            cout << "Answer : " << a << " / " << b << " = " << res << endl;
//        }
//        else
//        {
//            cout << "\nError! You cannot divide by "
//                "zero!\n";
//        }
//        break;
//    default:
//        cout << "Error choice " << endl;
//        break;
//    }
//    */
//
//    /*Examle 4 
//       float a, b, res;
//       cout << "Enter first number a : ";
//       cin >> a;
//       cout << "Enter second number b : ";
//       cin >> b;
//
//       char key;
//       cout << "Choose the operation " << endl;
//       cout << " [ + ] - if you want to add two numbers  " << endl;
//       cout << " [ - ] - if you want to deduct two numbers  " << endl;
//       cout << " [ * ] - if you want to muliply two numbers  " << endl;
//       cout << " [ / ] - if you want to divide two numbers  " << endl;
//       cin >> key;//key = '+', key = '-',key = '*',key = '/'
//       switch (key)
//       {
//       case '+':
//           res = a + b;
//           cout << "Answer : " << a << " + " << b << " = " << res << endl;
//           break;
//       case '-':
//           res = a - b;
//           cout << "Answer : " << a << " - " << b << " = " << res << endl;
//           break;
//       case '*':
//           res = a * b;
//           cout << "Answer : " << a << " * " << b << " = " << res << endl;
//           break;
//       case '/':
//           if (b != 0)
//           {
//               res = a / b;
//               cout << "Answer : " << a << " / " << b << " = " << res << endl;
//           }
//           else
//           {
//               cout << "\nError! You cannot divide by "
//                   "zero!\n";
//           }
//           break;
//       default:
//           cout << "Error choice " << endl;
//           break;
//       }
//       */
///*
//    char grade;
//    cout << "Enter grade : ";//A B  C D F
//    cin >> grade;
//    switch (grade)
//    {
//    case 'A': case 'a':
//        cout << "Your grade is 5\n";
//        break;
//    case 'B':
//    case 'b':
//        cout << "Your grade is 4\n";
//        break;
//    case 'C':
//    case 'c':
//        cout << "Your grade is 3\n";
//        break;
//    case 'D':
//    case 'd':
//        cout << "Your grade is 2\n";
//        break;
//    case 'F':
//    case 'f':
//        cout << "Your grade is 1\n";
//        break;
//    default:
//        cout << "This grade is invalid\n";
//        break;
//    }
//    */
//    //const int a = 5;
//    //const int USA = 1;
//    //const int Ukraine = 38;
//    //const int Italy = 39;
//    //const int Australia = 61;
//   
//    //enum - це набір іменованих цілочисельних констант.
//    enum countries { USA = 1, Ukraine = 38, Italy = 39, Australia = 61 };
//    cout << USA << endl;
//    cout << Ukraine << endl;
//    cout << Italy << endl;
//    cout << Australia << endl;
//
//    enum menu{add = 1, sub, multy, div, exit = 0};
//
//    menu Menu;
//    switch (Menu)
//    {
//    case add:
//        break;
//    case sub:
//        break;
//    case multy:
//        break;
//    case div:
//        break;
//    case exit:
//        break;
//    default:
//        break;
//    }
//
//
//    enum coins{penny = 1, nickel = 5, dime = 10, quarter = 25, half = 50, dollar_coin = 100};
//    //const int penny = 1;
//    int coin;
//    cout << "Please enter the value of an American coin" << endl;
//    cin >> coin;
//    switch (coin)
//    {
//    case penny:
//        cout << "penny = 1 cent " << endl;
//        break;
//    case nickel:
//        cout << "nickel = 5 cents" << endl;
//        break;
//    case dime:
//        cout << "dime = 10 cents" << endl;
//        break;
//    case quarter:
//        cout << "quater = 25 cents" << endl;
//        break;
//    case half:
//        cout << "half = 50 cents " << endl;
//        break;
//    case dollar_coin:
//        cout << "large dollar = 100 cents" << endl;
//        break;
//    default:
//        cout << "not found" << endl;
//        break;
//    }
//      
//
//
//
//    
//
//}
//
