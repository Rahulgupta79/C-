#include<iostream>
using namespace std;
class prime
{
    private:
        int num;
        int p,i;
    public:
        void getdata()
        {
            cout<<"Enter a number:";
            cin>>num;
        }
        void putdata()
         {  
            p=0;
            for(i=2;i<=num/2;i++)
             {
                if(num%i==0)
                {
                    p++;
                }
             }
            if(p==0)
             {
                cout<<"Prime";
             }
             else
             {
                  cout<<"Not Prime";
             }
            }
};
int main()
{
    prime n;
    n.getdata();
    n.putdata();
    return 0;
}   