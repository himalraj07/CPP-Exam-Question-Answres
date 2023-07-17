/*
    Q5. Design a class to represent a bank account with data members name, account-number, account-type, and balance and functions to assign initial values, to deposit an amount, to withdraw an amount after checking balance, and to display the name and balance.
*/

#include <iostream>
using namespace std;

class bank
{
    string name, acc_typ;
    int balance, acc_no;

public:
    void getdata(string nm, string acct, int bal, int accno)
    {
        name = nm;
        acc_typ = acct;
        balance = bal;
        acc_no = accno;
    }

    void deposit()
    {
        int dep;
        cout << "Enter deposit amount : ";
        cin >> dep;
        balance += dep;
    }

    void withdraw()
    {
        int wth;
        cout << "Enter the amount you want to withdraw : ";
        cin >> wth;
        balance -= wth;
    }

    void dis()
    {
        cout << "Name : " << name << endl;
        cout << "Account number : " << acc_no << endl;
        cout << "Account type : " << acc_typ << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    int bal, accno;
    string nm, acct;
    cout << endl;

    cout << "Enter your bank details :" << endl;
    cout << "Enter your name : ";
    cin >> nm;

    cout << "Enter your Account number : ";
    cin >> accno;

    cout << "Enter your Accout type : ";
    cin >> acct;

    cout << "Enter your balance : ";
    cin >> bal;

    bank b;
    b.getdata(nm, acct, bal, accno);
    b.deposit();
    b.withdraw();
    cout << endl;

    cout << "Displaying data about your bank details ..." << endl;
    b.dis();
    cout << endl;

    return 0;
}