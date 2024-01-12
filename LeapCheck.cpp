#include<iostream>
using namespace std;
int Leap(int year)
{
	int flag=0;
	if(year<=1752)
	{
		if(year%4==0)
		{
			flag=1;
		}
	}
	else
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				flag=1;
			}
		}
		else
		{	
			if(year%4==0)
			{
				flag=1;
			}
		}
	}
	return flag;
}
int main()
{
    int year,flag;
    cout<<"Enter a number to find Leap:";
    cin>>year;
    flag=Leap(year);
    if(flag==1)
    {
        cout<<"Year is leap->"<<year;
    }
    else
    {
        cout<<"Year is not Leap->"<<year;
    }
    return 0;
}