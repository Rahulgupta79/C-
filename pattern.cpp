#include<iostream>
using namespace std;
int main()
{
    int num,i,j=0;
    cout<<"Enter a number:";
    cin>>num;
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            //cout<<"*";
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}