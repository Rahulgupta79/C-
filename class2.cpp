#include<iostream>
using namespace std;
class Rahul{
    public:
        int n,m;

        int sum(int a,int b)
        {
            return a+b;
        }
};

int main()
{
    Rahul G;
    cout<<"Enter two numbers:";
    cin>>G.m>>G.n;
    cout<<G.m<<"\t"<<G.n<<"\t"<<G.m+G.n<<endl;
    cout<<G.sum(5,7);
    return 0;
}