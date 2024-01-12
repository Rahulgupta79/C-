#include<iostream>
using namespace std;
void Evenodd(int a)
{
    if(a%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
}
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    Evenodd(x);
    return 0;
}
/*
#include<iostream>
using namespace std;
class even
{
    private:
        int num;
    public:
        void getdata()
        {
            cout<<"Ente a number to know even or Odd:";
            cin>>num;
        }
        void putdata()
        {
            if(num%2==0)
            {
                cout<<"Even:"<<num;
            }
            else
            {
                cout<<"Odd:"<<num;
            }
        }
};
int main()
{
    even number;
    number.getdata();
    number.putdata();
    return 0;
}
*/