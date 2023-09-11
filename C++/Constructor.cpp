#include <iostream>
using namespace std;
class Construct
{
public:
    int no;
    Construct() // default constructor
    {
        cout << "This is default Constructor." << endl;
    };
    Construct(int no) // Parameterize constructor
    {
        this->no = no;
        cout << "No is : " << no << endl;
    }
    Construct(Construct &obj) // Copy constructor
    {
        cout << "\nThis is copy constructor no is: " << ++obj.no;
    }
};
int main()
{
    int no = 10;
    Construct con;
    Construct con2(no);
    Construct con3 = con2;
    return 0;
}