#include<iostream>
using namespace std;
bool validemail(char e[])
{
    int a=-1,i;
     for(i=0;e[i]!='\0';i++)
    {
    if((e[i]!='@')&&(e[i]!='$')&&(e[i]!='#')&&(e[i]!='&')&&(e[i]!='9')&&(e[i]!='8')&&(e[i]!='7')&&(e[i]!='6')&&(e[i]!='5')&&(e[i]!='4')&&(e[i]!='3')&&(e[i]!='2')&&(e[i]!='1')&&(e[i]!='0'))
    {
        a++;
    }
    }
    
    if(a==-1||i<=6)
    {
        return 1;
    }
    else 
    return 0;
}
int main()
{
 int a;
 char e[50];
 try
 {
    cout<<"Enter a username ";
    cin>>e;
    if(validemail(e))
    {
        cout<<"This is  not valid username";
    }
    else
    {
        throw e;
    }
    
 }   
 catch(char c[])
 {
    cout<<"This is not a correct username ";
 }
}