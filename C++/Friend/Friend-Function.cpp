#include<iostream>
using namespace std;
class Friend{
int no;
public:
    friend int data(Friend &obj);
};
int data(Friend &obj)//friend function to access private members of class.
{
    cout<<"Enter the value of no : ";
    cin>>obj.no;
    cout<<"Value of no is: "<< obj.no;
    return 0;
}
int main()
{
    Friend obj1;//creating objects
    data(obj1);//calling a friend function using object reference.
    return 0;
}