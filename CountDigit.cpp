#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Number="<<num<<endl;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    cout<<"Digit="<<count;
    return 0;
}