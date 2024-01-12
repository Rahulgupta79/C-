#include<iostream>
using namespace std;
int main()
{
    int n,power=1,ans=0,lastdigit;
    cout<<"Enter the Binary:";
    cin>>n;
    while(n>0)
    {
        lastdigit=n%10;
        ans=ans+(lastdigit*power);
        power=power*2;
        n=n/10;
    }
    cout<<"Digit of Binary:"<<ans;
    return 0;
}