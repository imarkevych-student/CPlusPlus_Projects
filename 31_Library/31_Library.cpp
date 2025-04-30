#include"Library.h"

Library TestLibrary(Library& lib)//copy 
{
    Library temp = lib;
    return temp;//copy
}
class Test
{
    //default constructor
    //copy constructor
    //destructor
    //operator =
};
int main()
{
    //Book book;
    //book.ShowInfo();

    Book book1("C++ for Begginers", "Stiven Prata", ComputerScience, 2000, 1500);
    //Book book2("Harry Potter", "J.K.Rowling", Fantasy, 1997, 800);
    //Book book3("Sherlock Holmes", "Arthur Conan Doyle",Genre::Fantasy, 1887, 2000);
    //Book book4("Java for kids", "Morgan Nick",Genre::ComputerScience, 2015, 408);
    //Book book5("Mowgli", "Pantera",Genre::Adventure, 1893, 500);
    //Book book6("Financier", "Dreiser Theodore",Genre::ComputerScience, 1911, 377);

    //book5.ShowInfo();

    Library lib("Home Library");
    lib.AddBook(book1);
    lib.AddBook(Book("Harry Potter", "J.K.Rowling", Fantasy, 1997, 800));
    lib.AddBook(Book("Sherlock Holmes", "Arthur Conan Doyle", Genre::Fantasy, 1887, 2000));
    lib.AddBook(Book("Java for kids", "Morgan Nick", Genre::ComputerScience, 2015, 408));
    lib.AddBook(Book("Mowgli", "Pantera", Genre::Adventure, 1893, 500));
    lib.AddBook(Book("Financier", "Dreiser Theodore", Genre::ComputerScience, 1911, 377));

    lib.Show();
    cout << " -------------------Copy Library -------------------" << endl;
    Library copy_library(lib);
    copy_library.Show();

    cout << " -------------------New Library -------------------" << endl;

    Library newLib = TestLibrary(lib);
    newLib.Show();
    cout << " -------------------Lib 2 Library -------------------" << endl;

    Library lib2 = lib;
    lib2.Show();

    int a = 5, b = 7, c = 12;
    a = b = c;
    Library lib3;
    lib3 = lib2 = lib;



}