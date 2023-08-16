/*
    File I/O in C++ : Read/Write in the Same Program & Closing Files
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting our file with hout stream
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the same string entered by the user
    string name;
    cout << "Enter your name : ";
    cin >> name;

    // Writing a string to the file
    hout << name + " is my name.";

    // Closing the file
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin >> content;
    cout << "The content of this file is: " << content;

    // Closing the file
    hin.close();

    return 0;
}

/*
    * 3 useful classes
    1. fstreambase
    2. ifstream -> derived from 1
    3. ofstream --> derived from 1

    * Read Operation
    ifstream in ("this.txt");
    string st;
    in>>st; // just like in

    * Write Operation
    ofstream out("this.txt");
    string st="Himal";
    out<<st; // Writes to a file this.txt!
*/