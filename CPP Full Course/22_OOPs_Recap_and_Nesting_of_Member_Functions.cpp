/*
    22. OOPs Recap & Nesting of Member Functions in C++
*/

/*
    OOPs - Classes and objects
    c++ --> initially called --> C with classes by stroustroup
    classes --> extension of structures (in C)
    structures had limitations
        -- members are public
        -- No methods
    Classes --> structures + more
    Classes --> can have methods and properties
    Classes --> can make few members as private & few as public
    Structures in c++ are typedefed
    You can create objects along with the class declaration
        class Employee
        {
            Class defination
        } himal, rohan, lovish;
    himal.salary = 8 makes no sense if salary is private

    //  Nesting of member functions

*/

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
    void display1(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number : ";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin(); //  At this point we are using consept of nesting of member functions. We are using chk_bin although it is private function.

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your number ..." << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void binary ::display1(void)
{
    cout << "Displaying ones complement of your binary number ..." << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();

    b.display();
    b.ones_compliment();
    b.display1();

    return 0;
}