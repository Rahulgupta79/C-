#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}

int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<add(x,y);
    return 0;
}