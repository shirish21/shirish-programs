/*uranary operator (-) overloading as a friend function*/

#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"\na="<<a<<"b="<<b;
    }
    friend complex operator-(complex);
};
    complex operator-(complex X)
    {
        complex temp;
        temp.a=-X.a;
        temp.b=-X.b;
        return(temp);
    }


main()
{
    complex c1,c2;
    c1.setdata(4,5);
    c2=-c1;  /c2=operator-(c1)/
    c2.showdata();
}
