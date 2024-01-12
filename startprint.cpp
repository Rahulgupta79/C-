#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter a number:";
    cin>>n;
    /*      1       */

    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<=i;j++)                *
    //     {                                **
    //         cout<<"*";                   ***
    //     }                                ****   
    //     cout<<endl;                      *****
    // }

    /*      2        */

    // for(i=0;i<n;i++)
    // {                                    *****
    //     for(j=i;j<n;j++)                 ****
    //     {                                ***
    //         cout<<"*";                   **
    //     }                                *
    //     cout<<" "<<endl;
    // }

    /*      3       */

    // for(i=0;i<=n;i++)
    // {
    //     for(j=0;j<=n;j++)
    //     {
    //         if(i==j)                       
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*       4       */

    // for(i=0;i<=n;i++)
    // {
    //     for(j=0;j<=n;j++)
    //     {
    //         if(i+j==n)                       
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*      5       */

    // for(i=0;i<=n;i++)
    // {
    //     for(j=0;j<=n;j++)
    //     {
    //         if(i==j || i+j==n)                       
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*      6       */

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==j || i+j==n)                       
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}