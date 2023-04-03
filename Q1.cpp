#include<iostream>
using namespace std;
void test(int n)
{
    try
    {
    if(n>10&&n<99)
    throw n;
    else
    {
        cout<<"This is not a double digit number ";
    }
    }
    catch(int a)
    {   
        cout<<"This is a double digit number ";
    }
    catch(char x)
    {
        cout<<x;
    }
}
int main()
{
    int i;
    cout<<"Enter the number ";
    cin>>i;
    test(i);
}