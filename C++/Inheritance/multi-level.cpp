#include<iostream>
using namespace std;
class Grandparent
{
public:
    int noh;
    Grandparent()
    {
        cout<<"Enter the total no of houses: ";
        cin>>noh;
    }
};
class Parent : public Grandparent
{
public:
    int bal;
    Parent()  //Constructor 
    {
        cout<<"Enter the total bank balance: ";
        cin>>bal;
    }
};
class Child : public Parent{
public:
int car;
    Child()
    {
        cout<<"Enter the total no of car: ";
        cin>>car;
    }
    void display()
    {
        cout<<"Total no of house is: "<<noh;
        cout<<endl<<"Total bank balance is: "<<bal;
        cout<<endl<< "Total no of car is: "<<car;
    }
};
int main()
{
    Child c1;   //Object creation and initialization.
    c1.display();    //Function call to access data members using object reference variable.
    return 0;
}