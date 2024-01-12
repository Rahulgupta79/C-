#include <iostream>
using namespace std;
int main()
{
    int n,i=1,j,k;
    cout<<"Enter a number:";
    cin>>n;
    while (i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        k=1;
        while(k<=(2*i)-1)//k<=i
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
    /*

    *
   ***
  *****
 *******
*********

    */