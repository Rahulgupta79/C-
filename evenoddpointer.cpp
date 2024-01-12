#include<iostream>
using namespace std;
/*
int main()
{
    int num;
    int *ptr;
    ptr=&num;
    cout<<"Enter a number:";
    //cin>>num;
    cin>>*ptr;
    if(*ptr%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}
*/
class even
{
    private:
        int num;
        int *ptr;
        ptr=&num;
    public:
        void getdata()
        {
            cout<<"Enter a number:";
            cin>>*ptr;
        }
        void putdata()
        {
            if(*ptr%2==0)
            {
                cout<<"Even";
            }
            else
            {
                cout<<"Odd";
            }
        }
};
int main()
{
    even p;
    p.getdata();
    p.putdata();
    return 0;
}
/**/