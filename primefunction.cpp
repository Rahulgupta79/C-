#include <iostream>
using namespace std;
void prime(int n)
{
    int p=0,i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    if(p==0)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    prime(n);
    return 0;
}