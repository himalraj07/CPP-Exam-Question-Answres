/*
    Name : Himal Raj Bhusal
    Roll Number : 8

    Q6. Define a Shape class (with necessary constructors and member functions)
    in Object Oriented Programming (abstract necessary attributes and their types).
    (Write a complete code in C++ programming language).
    • Derive Triangle and Rectangle classes from Shape class adding necessary
    attributes.
    • Use these classes in a main function and display the area of triangle and
    rectangle
*/

#include <iostream>
using namespace std;
class shape
{
public:
    float l, b;
    shape()
    {
        cout << "Enter Length : ";
        cin >> l;
        cout << "Enter Breadth : ";
        cin >> b;
    }
};
class triangle : public shape
{
public:
    void displayarea()
    {
        cout << "Area of Triangle is " << (l * b) / 2 << "." << endl;
    }
};
class rectangle : public shape
{
public:
    void displayarea()
    {
        cout << "Area of Rectangle is : " << l * b << "." << endl;
    }
};
int main()
{
    cout << endl;
    cout << "Enter data for Triangle :" << endl;
    triangle t;
    t.displayarea();
    cout << endl;
    cout << "Enter data for Rectangle :" << endl;
    rectangle r;
    r.displayarea();
    cout << endl;
    return 0;
}