// WAP to create the hybrid inheritance
#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "This is constructor A."<<endl; }
};
class B : public virtual A // This class will be inherited by C and D.
{
    public:
    B(){cout<<"This is Constructor of Class B."<<endl;}
};
class C : public virtual A  /* This class will not inherit from any other classes.*/
{
    public:
    C(){cout<<"This is constructor C."<<endl; }
};
class D : public B, public C{
public:
    D(){ cout<<"This is constructor D."; }
};
int main()
{
    D d1 ;   /// The output will be as follows:-
    /*This is constructor A.
    This is Constructor of Class B.
    This is constructor C.
    This is constructor D*/
    return 0;
}