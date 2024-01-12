#include<iostream>
using namespace std;
int add(int a,int Sum)
{
    Sum=Sum+a;
    return Sum;
}

int sub(int s,int Sub)
{
    if(Sub==0)
    {
        Sub=Sub-(-s);
    }
    else
    {
        Sub=Sub-s;
    }
    return Sub;
}

int mul(int m,int Mul)
{
    Mul=Mul*m;
    return Mul;
}

int divi(int d,int Div)
{
    Div=Div/d;
    return Div;
}
int main()
{
    int flag=1,a,s,m,d,Ans=0,Sum=0,Sub=0,Mul=1,Div=0;
    while(flag)
    {
        int choice;
        cout<<"\n1->Addition\n2->Substract\n3->Multiplication\n4->Division\n0->Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 0:system("cls");
                    flag=0;
            break;
            case 1:system("cls");
                    cout<<"\nEnter a number for Addition:";
                    cin>>a;
                    Sum=add(a,Sum);
                    Ans=Sum;
                    Sub=Ans;
                    Mul=Ans;
                    Div=Ans;
                    cout<<"\nAddition:"<<Ans;
            break;
            case 2:system("cls");
                    cout<<"Enter a number for substract:";
                    cin>>s;
                    Sub=sub(s,Sub);
                    Ans=Sub;
                    Sum=Ans;
                    Mul=Ans;
                    Div=Ans;
                    cout<<"Substraction="<<Ans;
            break;
            case 3:system("cls");
                    cout<<"Enter a number for multiply:";
                    cin>>m;
                    Mul=mul(m,Mul);
                    Ans=Mul;
                    Sum=Ans;
                    Sub=Ans;
                    Div=Ans;
                    cout<<"Multiplication="<<Ans;
            break;
            case 4:system("cls");
                    cout<<"Enter a number for division:";
                    cin>>d;
                    Div=divi(d,Div);
                    Ans=Div;
                    Sum=Ans;
                    Sub=Ans;
                    Mul=Ans;
                    cout<<"Division="<<Ans;
            break;
            default:cout<<"Please enter a valid input";
        }
    }
    return 0;
}