/*
    File I/O in C++ : open and eof() Functions
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "This is me\n";
    out << "Himal Raj Bhusal.";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60b.txt");
    // in >> st;
    // cout << st << st2;

    while (in.eof() == 0) // This loop prints all the text from the file, eof = end of file
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}