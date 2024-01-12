#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a number:";
    cin>>n;
    // for(i=1;i<=10;i++)
    // {
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    // }

    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            while(i<=10)
            {
               cout<<j<<"*"<<i<<"="<<j*i<<endl;
               i++;
            }
            cout<<endl;
        }
    }
    return 0;
}