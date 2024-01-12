#include<iostream>
using namespace std;
int main()
{
    int i=2,n,p=0;
    cout<<"Enter number:";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    if(p==0)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
    return 0;
}