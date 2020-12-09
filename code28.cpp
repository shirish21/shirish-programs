/*uranary operator (-) overloading program*/

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
    complex operator-()
    {
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return(temp);
    }
};

main()
{
    complex c1,c2;
    c1.setdata(4,5);
    c2=-c1;  /c2=c1.operator-();/
    c2.showdata();
}
