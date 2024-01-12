#include<iostream>
using namespace std;
class area
{
    private:
        int a,b;
    public:
        area(int length,int width )//constructor use for pass the value from out side of class
        {
            a=length;
            b=width;
        }
        void putdata()
        {
            cout<<"Area of rectangle:"<<a*b;
        }
};
int main()
{
    area square(8,8);//when we try to pass the value to class from outside then we have to use constructor
    square.putdata();
    return 0;
}