/*
    Write a program to calculate the area and volume of a room using OOP concept
    > Use Data members : length, breadth and height, which should be private.
    > Initilize the data members using constructor.
    > Define member functions for calculating area and volume of a room and for displaying the reasult.
    > Create an object of the class and use it to display the information.
*/

#include<iostream>
using namespace std;
class Room
{
    private:
    int length,breadth,height;
    public:
    Room(int l, int b, int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void displayArea()
    {
        cout<<"Area of the room:"<<length * breadth<<endl;
    }
    void displayVolume()
    {
        cout<<"Volume of the room:"<<length * breadth * height<<endl;
    }
};
int main()
{
    Room room(20,30,25);
    room.displayArea();
    room.displayVolume();
    return 0;
}