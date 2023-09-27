// WAP to operator overloading
#include <iostream>  // cout, endl
using namespace std;
class Operator
{
public: 
    int no;
    void get()
    {
        cout<<"Enter the value of no: ";
        cin>>no;
    }
    // Operator operator ++()
    // {
    //     no++;
    // }
    Operator operator >(Operator &obj2)
    {
        // Operator obj3;
        // obj3.no = no + obj2.no;
        // return (obj3);
        if(no > obj2.no)
        {
            cout<< no << " is the max.";
        }
        else{
            cout<< obj2.no << " is max.";
        }
        return obj2;
    }
    void display()
    {
        cout<<"Value of the no is: "<<no<<endl;
    }
};
int main()
{
    Operator operate1, operate2, operate3;
    operate1.get();
    operate1.display();
    operate2.get();
    operate2.display();
    // ++operate;
    // operate3 = operate1 + operate2;
    // operate3.display();
    operate1 > operate2;
    return 0;
}