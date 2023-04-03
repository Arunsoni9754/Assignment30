#include<iostream>
using namespace std;
int phone(int x)
{
    int count=0;
     while(x!=0)
        {
            x=x/10;
            count++;
        }
        return count;
}
int main()
{
    int a,l=0;
    try
    {
        cout<<"Enter a phone number ";
        cin>>a;
       l=phone(a);
       if(l==10)
       {
        throw l;
       }
       else
       {
        cout<<"kutreya dekh ke number dial kar ";
       }
    } 
    catch(int k)
    {
        cout<<"This is a correct number ";
    }
}