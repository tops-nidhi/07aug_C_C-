#include <iostream>
using namespace std;
int no = 100; // global variable
int main()
{
    int no = 56; // local variable
    cout << "Value of the local no is: " << no;
    cout << endl
         << "Value of global no is: " << ::no;
}