#include<iostream>
using namespace std;
class inheritance
{
    private:
        int x,y;
    public:
        void getdata()
        {
            cout<<"Enter first number:";
            cin>>x;
            cout<<"Enter second number:";
            cin>>y;
        }
        void putdata()
        {
            cout<<"First number:"<<x<<endl;
            cout<<"Second number:"<<y<<endl;
            cout<<"Total="<<x+y;
        }
};
int main()
{
    inheritance p;
    p.getdata();
    p.putdata();
    return 0;
}