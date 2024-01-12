#include<iostream>
using namespace std;
int main()
{
    int n,m,sum;
    int *p,*q;
    cout<<"Enter two number:";
    cin>>n>>m;
    p=&n;
    q=&m;
    sum=(*p)+(*q);
    cout<<"Total:"<<sum;
    return 0;
}