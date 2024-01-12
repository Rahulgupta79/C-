#include<iostream>
using namespace std;
int main()
{
    int n,j=0,i=0,ans[20];
    cout<<"Enter a Digit:";
    cin>>n;
    while(n!=0)
    {
        ans[i]=n%2;
        n=n/2;
        j=i;
        i++;
    }
    cout<<"Binary of Digit:";
    for(;j>=0;j--)
    {
        cout<<ans[j];
    }
    return 0;
}
/*2nd Method*/

// int main()
// {
//     int rem,n,ans=0,power=1;
//     cout<<"Enter a Digit:";
//     cin>>n;
//     while(n>0)
//     {
//         rem=n%2;
//         ans=rem*power;
//         power=power*10;
//         n=n/2;
//     } 
//     cout<<"Binary of Digit:"<<ans;
//     return 0;   
// }
