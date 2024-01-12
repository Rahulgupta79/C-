#include <iostream>
using namespace std;
int main()
{
    char c;
    int n1,n2;
    cout<<"Enter a number:";
    cin>>n1;
    cout<<"Enter a operator:";
    cin>>c;
    cout<<"Enter a number:";
    cin>>n2;
    if(c=='+')
    {
        cout<<n1+n2;
    }
    else if(c=='-')
    {
        if(n1<n2)
        {
            cout<<n2-n1;
        }
        else
        {
            cout<<n1-n2;
        }
    }
    else if(c=='*')
    {
        cout<<n1*n2;
    }
    else if(c=='/')
    {
        cout<<n1/n2;
    }
    else if(c=='%')
    {
        cout<<n1%n2;
    }
    else
    {
        cout<<"please enter a valid operator";
    }
    
    return 0;
}