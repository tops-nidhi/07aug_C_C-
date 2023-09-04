// WAP to create the class
#include <iostream>
using namespace std;
class A
{
    int no; // define the data member
public:
    int getdata()
    {
        cout << "Enter the value of the no: ";
        cin >> no;
        return 0;
    };
// private:
    void display()
    {
        cout << endl
             << "Value of no is: " << no << endl;
    };
} a1[5];

int main()
{
    // A a1;
    // a1.display();
    for (int i = 0; i < 3; i++)
    {
        a1[i].getdata();
        a1[i].display();
    }
    
    return 0;
}