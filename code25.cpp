/* addition of two number using two classes with the help of friend function*/

#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a;
    public:
    void setdata(int x)
    {a=x;}
    friend void fun(A,B);
};

class B
{
    private:
    int b;
    public:
    void setdata(int y)
    {b=y;}
    friend void fun(A,B);
};

void fun(A o1,B o2)
{
  cout<<"sum of"<<o1.a<<"and"<<o2.b<<"is"<<o1.a+o2.b;
}

main()
{
    A obj1;
    B obj2;
    obj1.setdata(5);
    obj2.setdata(5);
    fun(obj1,obj2);
}
