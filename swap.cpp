
#include<iostream>
using namespace std;
void swapsN(int &x,int &y)
{
    int temp = x;
    x=y;
    y= temp;
}
int main()
{
    int a=2,b=3;
    cout<<"The value of a before swap is : "<<a<<endl;
    cout<<"The value of b before swap is : "<<b<<endl;
    swapsN (a,b);
    cout<<"The value of a after swap is : "<<a<<endl;
    cout<<"The value of b after swap is : "<<b<<endl;
    return 0;
}