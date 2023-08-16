/*
    File I/O in C++ : Reading and Writing Files
*/

#include <iostream>
#include <fstream>
using namespace std;

/*
    The useful classes for working files in C++ are:
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstream

    In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
    1. Using the constructor
    2. Using the membe function open() of the class
*/

int main()
{
    string st = "Himal Raj Bhusal";
    string st2;

    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out << st;

    // Opening files using constructor and reading it
    // ifstream in("sample60b.txt"); // Read operation
    // in>>st2;
    // getline(in,st2);
    // getline(in,st2);
    cout << st2;

    return 0;
}