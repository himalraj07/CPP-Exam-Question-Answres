/*
    Q3. Write a program according to the specification given below:
    • Create a class Teacher with data members tid and subject and member functions for reading and displaying data members.
    • Create another class Staff with data members sid and position, and member functions for reading and displaying data members.
    • Derive a class Coordinator from Teacher and Staff and the class must have its own data member department and member functions for reading and displaying data members.
    • Create two objects of Coordinator class and read and display their details.
*/

#include <iostream>
using namespace std;

class Teacher
{
    string subject;
    int tid;

public:
    void read()
    {
        cout << endl;
        cout << "Enter data for Teacher : " << endl;
        cout << "Enter the ID of the teacher : ";
        cin >> tid;
        cout << "Enter the subject of the teacher : ";
        cin >> subject;
    }

    void dis()
    {
        cout << endl;
        cout << "Displaying Data for Teacher ..." << endl;
        cout << "ID of the teacher : " << tid << endl;
        cout << "Subject : " << subject << endl;
    }
};

class Staff
{
    int sid;
    string position;

public:
    void read()
    {
        cout << endl;
        cout << "Enter data for Staff : " << endl;
        cout << "Enter ID of the staff : ";
        cin >> sid;
        cout << "Enter position of the staff : ";
        cin >> position;
    }

    void dis()
    {
        cout << endl;
        cout << "Displaying Data for Staff ..." << endl;
        cout << "ID of staff : " << sid << endl;
        cout << "Position : " << position << endl;
    }
};

class Coordinator : public Teacher, public Staff
{
    string department;

public:
    void read()
    {
        Teacher::read();
        Staff::read();
        cout << endl;
        cout << "Enter data for Coordinator : " << endl;
        cout << "Enter department of the coordinator : ";
        cin >> department;
    }

    void dis()
    {
        Teacher::dis();
        Staff::dis();
        cout << endl;
        cout << "Displaying Data for Coordinator ..." << endl;
        cout << "Department of coordiantor : " << department << endl;
    }
};

int main()
{
    cout << endl;
    cout << "*** Enter data for first Department ***" << endl;
    Coordinator c1, c2;
    c1.read();
    c1.dis();

    cout << endl;
    cout << "****************************************" << endl;
    cout << endl;

    cout << "*** Enter data for second Department ***" << endl;
    c2.read();
    c2.dis();
    cout << endl;
    
    return 0;
}