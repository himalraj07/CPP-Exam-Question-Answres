/*
    37. Inheritance Syntax and Visibility Mode in C++
*/

#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
/*
    Derived Class Syntax
    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    {
        class members/methods/etc...
    }
    {{ }} --> It's meaning it it is replaced during coading
    Note:
    1. Default visibility mode is private
    2. Public Visibility Mode: Public members of the base class becomes public members of the derived class
    3. Private Visibility Mode: Public members of the base class becomes private members of the derived class
    4. Private members are never inherited
*/
// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}