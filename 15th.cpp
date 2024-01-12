#include<iostream>
using namespace std;
class add
{
    private:
        int n1,n2;
    public:
        void getdata();
        /*
        {
            cout<<"Enter two numbers:";
            cin>>n1>>n2;
        }
        */
        void putdata();
        /*
        {
            cout<<"Add of two numbers:"<<n1+n2;
        }
        */
};
void add::getdata()
{
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
}
void add::putdata()
{
      cout<<"Add of two numbers:"<<n1+n2;
}
int main()
{
    add member;
    member.getdata();
    member.putdata();
    return 0;
}
