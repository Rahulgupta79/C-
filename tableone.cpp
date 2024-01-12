#include<iostream>
using namespace std;
class table
{
    private:
        int num,i;
    public:
        void getdata()
        {
            cout<<"Enter a number:";
            cin>>num;
        }
        void putdata()
        {
            for(i=1;i<=10;i++)
            {
                cout<<num<<"*"<<i<<"="<<num*i;
                cout<<endl;
            }
        }
};
int main()
{
    table t;
    t.getdata();
    t.putdata();
    return 0;
}