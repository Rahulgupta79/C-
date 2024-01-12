#include<iostream>
using namespace std;
/*int main()
{
    int x=4;
    int y=6;
    cout<<x<<"+"<<y<<"="<<x+y;
    return 0;
}*/
int main()
{
    int i,j=0,n;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
    return 0;
}