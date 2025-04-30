//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char symbol = 'g';
//    cout << symbol << endl;
//
//    char line[] = { 'C','a','t','!' ,'\0' };
//    for (int i = 0; i < 4; i++)
//    {
//        cout << line[i];
//    }
//    //   строки C-style 
//    //  string
//    cout << endl;
//    char mystring[] = "string";//string + \0
//    cout << mystring << " has " << sizeof(mystring) << endl;
//    //mystring = "Cat!";//error
//    mystring[1] = 'p';
//    cout << mystring << endl;
//    /*int arr[] = { 1,2,3,4 };
//    arr[0] = 7;*/
//
//    char name[15] = "Max";//4 --> Max + \0
//    cout << name << endl;
//    cout << name << " length symbols = " << strlen(name) << endl;
//    cout << name << " length container = " << sizeof(name) << endl;
//
//    //char myname[255];
//    //cout << "Enter your name ";
//    ////cin >> myname;
//    //cin.getline(myname, 255);
//    //cout << "Your name : " << myname << endl;
//
//    //Functions 
//    char text[] = "Print this!";
//    char copy[50];
//    strcpy_s(copy, text);
//    cout << text << endl;
//    cout << copy << endl;
//
//
//    char arr[255] = "Returns the head of a list.";
//    cout << arr << endl;
//    cout << "Lenght = " << strlen(arr) << endl;
//    _strupr_s(arr);
//    cout << arr << endl;
//    _strlwr_s(arr);
//    cout << arr << endl;
//
//    _strrev(arr);
//    cout << arr << endl;
//    _strrev(arr);
//    cout << arr << endl;
//
//    cout << "COPY ARRAYS: \n";
//    char arr2[255];
//    strcpy_s(arr2, arr);
//    cout << arr2 << endl;
//    arr2[3] = '\0';
//    cout << arr2 << endl;
//
//    cout << "ADD TO ARRAY: \n";
//    cout << arr << endl;
//    strcat_s(arr, "...............");
//    cout << arr << endl;
//    cout << "Enter text : ";
//    cin >> arr2;
//    strcat_s(arr, arr2);
//    cout << arr << endl;
//
//
//
//
//
//
//
//
//
//
//
//}