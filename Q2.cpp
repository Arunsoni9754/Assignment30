#include<iostream>
using namespace std;
int main()
{ int a;
    try 
    {
        throw a;
    }
    catch(int a)
    {
        cout<<"Integer is caught "<<a<<endl;
    }
    return 0;
}