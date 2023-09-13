#include<iostream>
using namespace std;
class Base{
public: 
    Base()
    {
        cout<<"Base Constructor"<<endl;
    }
};
class Derived : public Base{
public:
    Derived()
    {
        cout<<"Derived constructor";
    }
};
int main()
{
    Derived d1;
    return 0;
}