#include<iostream>
using namespace std;
class fibonacci
{
    private:
        int i=0,j=1,k=0,m,n;
    public:
        void getdata()
        {
            cout<<"Enter a number:";
            cin>>n;
        }
        void putdata()
        {
            cout<<i<<"\t"<<j;
            for(m=0;m<n-2;m++)
            {
                k=i+j;
                i=j;
                j=k;
                cout<<"\t"<<k;
            }
        }
};
int main()
{
    fibonacci fb;
    fb.getdata();
    fb.putdata();
    return 0;
}