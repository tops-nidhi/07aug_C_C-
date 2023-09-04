#include <iostream>
using namespace std;
int a = 90;
class This
{
public:
    int a = 50; // data member
    int data()
    {
        int a = 23; // local variable
        cout << "Value of the local variable a is: " << a << endl;
        cout << "Value of the data member a is: " << this->a << endl;
        cout<< "Value of global a is: "<< ::a;
        return 0;
    }
};
int main()
{
    This t1;
    t1.data();
}