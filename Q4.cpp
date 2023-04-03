#include<iostream>
using namespace std;
bool validemail(char e[])
{
    int a=-1;
     for(int i=0;e[i]!='\0';i++)
    {
    if(e[i]=='@')
    {
        a=i;
    }
    }
    if(a==-1)
    {
        return 0;
    }
    else 
    return 1;
}
int main()
{
 int a;
 char e[50];
 try
 {
    cout<<"Enter an email address ";
    cin>>e;
    if(validemail(e))
    {
        cout<<"This is a valid email address";
    }
    else
    {
        throw e;
    }
    
 }   
 catch(char c)
 {
    cout<<"This is not a correct email address";
 }
}