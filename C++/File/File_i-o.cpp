#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    int a; 
    int b;
    cout<<"Enter the 2 number: ";
    cin>>a>>b;
    ofstream out; //use to write inside the file
    out.open("test.txt"); //to open
    out<<"Addition of the "<< a <<" and " << b << " is " <<a+b; //to write inside the file5

    out.close();
    ifstream in("test.txt"); //use to read the file
    // in.open("test.txt");
    in>>str;
    cout<<str;
    in.close();
    return 0;   
}