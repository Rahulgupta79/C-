#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    while(1)
    {
      cout<<"Enter a odd number:";
      cin>>n;
      if(n%2==0)
      {
        continue;
      }
      else
      {
        break;
      }
    }
    
    for(i=1;i<=n;i++)
    {
        
        if(i==(n/2)+1)
        {
            j=1;
            while(j<=6)
            {
                cout<<"*";
                j++;
            }
            cout<<endl;
        }
        else
        {
            cout<<"*";
            j=1;
            while(j<=4)
            {
                cout<<" ";
                j++;
            }
        cout<<"*"<<endl;
        }
    }
    return 0;
}
/*
*    *
*    *
*    *
*    *
******
*    *
*    *
*    *
*    *
*/