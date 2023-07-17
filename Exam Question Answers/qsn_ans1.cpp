/*
    Q1. Create a class author with attributes name and qualification. Also create a class publication with pname. From these classes derive a class book having attribute title and price. Each of the three classes should have a getdata() method to get their data from user. The classes should have putdata( ) method to display the data. Create instances of the class book in main.
*/

#include <iostream>
using namespace std;

class author
{
protected:
    string name, qualification;

public:
    void getdata()
    {
        cout << "Enter name of the author : ";
        cin >> name;
        cout << "Enter qualification of the author : ";
        cin >> qualification;
    }
    void putdata()
    {
        cout << "Name of the author : " << name << endl;
        cout << "Qualification of the author : " << qualification << endl;
    }
};

class publication
{
protected:
    string pname;

public:
    void getdata()
    {
        cout << "Enter name of the publication : ";
        cin >> pname;
    }
    void putdata()
    {
        cout << "Name of the publication : " << pname << endl;
    }
};

class book : public author, public publication
{
protected:
    string title;
    int price;

public:
    void getdata()
    {
        author::getdata();
        publication::getdata();
        cout << "Enter title of the book : ";
        cin >> title;
        cout << "Enter price of the book : ";
        cin >> price;
    }
    void putdata()
    {
        author::putdata();
        publication::putdata();
        cout << "Title of the book: " << title << endl;
        cout << "Price of the book: " << price << endl;
    }
};

int main()
{
    book b;
    cout << endl;
    cout << "Enter details of the Book :" << endl;
    b.getdata();
    cout << endl;
    cout << "**********************************************" << endl;
    cout << endl;
    cout << "Displaying  details of the Book ..." << endl;
    b.putdata();
    cout << endl;
    return 0;
}