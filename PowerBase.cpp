#include<iostream>
using namespace std;
int main()
{
    int base,power,value=1,i=1;
    cout<<"Enter Base(Number):";
    cin>>base;
    cout<<"Enter Power(Base):";
    cin>>power;
    while(i<=power)
    {
        value=value*base;
        i++;
    }
    cout<<"Value="<<value;
    return 0;
}