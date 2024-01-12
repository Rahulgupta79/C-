#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter a number:";
    cin>>num;
    while(num!=0)
    {
        if((num%10)%2==0)
        {
            count++;
        }
        num=num/10;
    }
    cout<<"Even digit="<<count;
    return 0;
}