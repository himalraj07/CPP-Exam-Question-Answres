/*
    Q4. Imagine a college hires some lecturers. Some lecturers are paid in period basic, while others are paid in month basic. Create a class called lecture that stores ID and name of lectures. From this class derive two classes: part time, which adds payperhr(type float); and full time, which adds paypermonth(type float). Each of these classes should have a readdata( ) function to get its data from user at the keyboard and printdata( ) function to display the data. Write a main( ) program to test the Full time and Part time classes by creating instance of them asking the user to fill their data with readdata() and display the data with printdata( ).
*/

#include <iostream>
using namespace std;

class lecture
{
    int id;
    string name;

public:
    void readdata()
    {
        cout << "Enter ID of the lecturer : ";
        cin >> id;
        cout << "Enter name of the lecturer : ";
        cin >> name;
    }

    void printdata()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

class parttime : public lecture
{
    float payperhr;

public:
    void readdata()
    {
        lecture::readdata();
        cout << "Enter your pay per hour : ";
        cin >> payperhr;
    }

    void printdata()
    {
        lecture::printdata();
        cout << "Pay per hour : " << payperhr << endl;
    }
};

class fulltime : public lecture
{
    float paypermonth;

public:
    void readdata()
    {
        lecture::readdata();
        cout << "Enter your pay per month : ";
        cin >> paypermonth;
    }

    void printdata()
    {
        lecture::printdata();
        cout << "Pay per month : " << paypermonth << endl;
    }
};

int main()
{
    parttime pt;
    fulltime ft;

    cout << endl;
    cout << "Enter data for part time lecturer :" << endl;
    pt.readdata();
    cout << endl;

    cout << "Displaying data for part time lecturer ..." << endl;
    pt.printdata();
    cout << endl;

    cout << "Enter data for full time lecturer :" << endl;
    ft.readdata();
    cout << endl;

    cout << "Displaying data for full time lecturer ..." << endl;
    ft.printdata();
    cout << endl;

    return 0;
}