/*
    25_a. Array of Objects & Passing Objects as Function Arguments in C++
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the ID of Employee : ";
        cin >> id;
    }
    void getID(void)
    {
        cout << "The ID of this Empoyee is " << id << endl;
    }
};

int main()
{
    // Employee himal,rohan,lovish,shruti;
    // himal.setId();                       ---> This is not possible for large data of objects.
    // himal.getID();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getID();
    }

    return 0;
}