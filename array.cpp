#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the values of rows and column:";
    cin>>r>>c;
    int ar[r][c],i,j;
    cout<<"Enter numbers for array:";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>ar[i][j];
        }
    }
    cout<<"Data is-:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<ar[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}