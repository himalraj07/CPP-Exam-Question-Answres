/*
    24. Static Data Members & Methods in C++ OOPS
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        // cout<<id;   //  throws an error
        cout << "The value of count is " << count << endl;
    }
};

//  Count is the static data member of class Employee
int Employee::count = 1000; //  Default value is 0

int main()
{
    Employee himal, rohan, lovish;

    // himal.id = 1;
    // himal.count = 1;    //  can not do this as id and count are privte

    himal.setData();
    himal.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}