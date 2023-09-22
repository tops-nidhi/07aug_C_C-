// WAP to get the addition using Function overloading in c++
#include <iostream> // std::cout, std::cin
using namespace std;
class Poly
{
public:
    inline int add(int a, int b) { return (a + b); }
    inline float add(float a, float b) { return (a + b); }
};
int main()
{
    Poly p1;
    cout << endl
         << p1.add(56, 9);
    cout << endl
         << p1.add(5.9f, 9.0f);
}