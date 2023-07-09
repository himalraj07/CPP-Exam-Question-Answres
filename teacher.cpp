#include<iostream>
using namespace std;
class Teacher
{
    int id;
    string subject;
    public:
    void getData();
    void displayInfo();
};
void Teacher :: getData()
{
    cout<<"Enter teacher id :";
    cin>>id;
    cout<<"Enter teacher subject :";
    cin>>subject;
}
void Teacher :: displayInfo()
{
    cout<<"Your id is : "<<id<<endl;
    cout<<"Your subject is : "<<subject<<endl;
}
int main()
{
    Teacher obj1;
    obj1.getData();
    obj1.displayInfo();
    Teacher obj2;
    obj2.getData();
    obj2.displayInfo();
    return 0;
}