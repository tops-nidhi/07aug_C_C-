#include<iostream>
using namespace std;
template <typename T>
class Template
{
public:
    Template (T a, T b)
    {
        if (a > b)
        {
            cout<< a << " is max." << endl;
        }
        else if(a == b)
        {
            cout<< "Both are equal" << endl;
        }
        else{
            cout<< b << " is max." << endl;
        }
    }
};
int main()
{
    Template <float> t1(3.8, 3.9);
    Template <int> t2(3.8, 3.9);
    return 0;
}