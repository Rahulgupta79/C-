#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter a number(increase):";
    cin>>n;
    for(i=1;i<=n;i++)
    {
            j=1;
            while(j<=i)
            {
                cout<<"*";
                j++;
            }
            cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*
*
**
***
****
*****
******
*******
********
*********
********
*******
******
*****
****
***
**
*
*/