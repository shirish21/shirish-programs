/* binary operator(+) overloading program*/

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
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};


main()
{  
    complex c1,c2,c3;
    c1.setdata(6,3);
    c2.setdata(8,5);
    c3=c1+c2;   /c3=c1.operator+(c2);/
    c3.showdata();
}
