// Hide the data which was unnecessary for the user
#include <iostream>
using namespace std;
class Abstract
{
    int no;

public:
    int data()
    {
        cout << "Enter the value of the no: ";
        cin >> no;
        cout << endl
             << "Value of the no is: " << no;

        return 0;
    }
};
int main(void)
{
    Abstract abs;
    abs.data();
    return 0;
}