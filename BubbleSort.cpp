#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter how much you want to insert:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter number:";
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(int k=0;k<n-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
            else
            {
                continue;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}