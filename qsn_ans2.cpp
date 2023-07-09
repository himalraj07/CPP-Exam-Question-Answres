/*
    Name : Himal Raj Bhusal
    Roll Number : 8

    Q2. Write a class Account with data members acc no, balance, and min_balance(static).
    • Include methods for reading and displaying values of objects.
    • Define static member function to display min_balance.
    • Create array of objects to store data of 5 accounts and read and display values of each object. (TU- 2078)
*/

#include <iostream>
using namespace std;
class Account
{
    int acc_no, balance;
    static int min_bal;

public:
    static void getd1()
    {
        cout << "Enter your minimum balance : ";
        cin >> min_bal;
        cout << endl;
    }
    void getd()
    {
        cout << "Enter your account number : ";
        cin >> acc_no;
        cout << "Enter your balance : ";
        cin >> balance;
    }
    void dis()
    {
        cout << "Your account no. : " << acc_no << endl;
        cout << "Your balance : " << balance << endl;
        // cout << endl;
    }

    static void dis1()
    {
        cout << "Your minimun balance : " << min_bal << endl;
    }
};
int Account::min_bal;
int main()
{
    cout << endl;
    Account a[5];
    Account::getd1();

    for (int i = 0; i < 5; i++)
    {
        cout << "Input data for person : " << i + 1 << endl;
        a[i].getd();
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "******************************" << endl;
        cout << "Displaying data for person : " << i + 1 << endl;
        a[i].dis();
        a[i].dis1();
        cout << endl;
    }
    return 0;
}