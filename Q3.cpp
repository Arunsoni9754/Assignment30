#include<iostream>
using namespace std;
int main()
{
    int a,b,ans;
    char op;
    try
    {
        cout<<"Enter a number ";
        cin>>a;
        if(a==0)
        {
            throw 0;
        }
        cout<<"enter the op";
        cin>>op;
        if((op!='+') && (op!='-') && (op!='*') && (op!='/'))
        {
            throw op;
        }
        cout<<"enter the second number ";
        cin>>b;
        switch(op)
        {
            case '+':
            ans=a+b;
            break;
             case '-':
            ans=a-b; 
            break;
            case '*':
            ans=a*b; 
            break;
            case '/':
            if(b==0)
            {
                throw 0;
            }
            ans=a/b;
            break;
        }
        cout<<"\n Answer :"<<a<<" "<<op<<" "<<b<<"="<<ans;
    }
    catch(int x)
    {
        cout<<"bhosdike andha hai kya upar neeche 0 nahi aayega";
    }
    catch(const char c)
    {
        cout<<c<<" is not a valid op";
    }

}