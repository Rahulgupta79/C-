#include<iostream>
using namespace std;
int main()
{
    int x,i,count=0;
    cout<<"Enter a number:";
    cin>>x;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
           count++;
        }
        }
        if(count==0)
        {
            cout<<"Prime Number="<<x;
        }
        else
        {
            cout<<"Not Prime Number="<<x;
        }
    return 0;
}