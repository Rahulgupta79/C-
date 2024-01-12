#include<iostream>
using namespace std;
class table
{
    private:
        int num,i,j;
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
                for(j=1;j<=num;j++)
                {
                    cout<<j<<"*"<<i<<"="<<j*i;
                    cout<<"\t";
                }
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