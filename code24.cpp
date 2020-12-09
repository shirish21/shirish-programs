/* addition of two number using friend function */

#include<iostream>
using namespace std;
class complex
{
    private:
    int a;int b;
    public:
    void setdata(int x,int y)
    {a=x;b=y;}
    void showdata()
    {cout<<"a="<<a<<"b="<<b;}
    friend void fun(complex);
};
void fun(complex c)
{
  cout<<"sum of"<<c.a<<"and"<<c.b<<"is"<<c.a+c.b;
}
main()
{
    complex c1;
    c1.setdata(5,7);
    fun(c1);
}
