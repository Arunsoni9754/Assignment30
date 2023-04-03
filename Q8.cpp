#include<iostream>
using namespace std;
int validemail(char e[])
{
    int a=-1,i;
     for(i=0;e[i]!='\0';i++)
    {
    if((e[i]=='@')||(e[i]=='$')||(e[i]=='#')||(e[i]=='&')||((e[i]>='0')&&(e[i]<='9')))
    {
        a=1;
    }
    }
    
    if(a==-1)
    {
        return 0;
    }
    else
    {return 1;}
}
int main()
{
 int a;
 char e[50];
 try
 {
    cout<<"Enter a password ";
    cin>>e;
    if(validemail(e))
    {
        cout<<"This is valid password";
    }
    else
    {
        throw e;
    }
    
 }   
 catch(char c[])
 {
    cout<<"This is not a correct password ";
 }
}