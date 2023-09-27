#include<iostream>
using namespace std;
template <class t> //declare the template
t div(t a, t b){
    return (a/b);  }   /*function declaration*/
int main()
{
    cout<< endl << div <int> (5, 2);
    cout<< endl << div <float> (5, 2);
}