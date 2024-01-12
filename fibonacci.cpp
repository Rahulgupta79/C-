#include<iostream>
using namespace std;
int main()
{
    int i=0,n,m,j=1,k=0;
    cout<<"Enter a number:";
    cin>>n;
    if(n==1)
    {
        cout<<"0";
    }
    else if(n==2)
    {
        cout<<i<<"\t"<<j;
    }
    else
    {
        for(m=0;m<n-2;m++)
        {
            k=i+j;
            i=j;
            j=k;
            cout<<"\t"<<k;
        }
    }
    return 0;
}