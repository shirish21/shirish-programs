/*overloading of insertion and extraction operator */  

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
    friend istream& operator>>(istream&,complex&);
    friend ostream& operator<<(ostream&,complex);
};

istream& operator>>(istream &din,complex &C)
{
    cin>>C.a>>C.b; //din>>C.a>>C.b;
    return(din);
}

ostream& operator<<(ostream &dout,complex X)
{
    cout<<"\na="<<X.a<<"\nb="<<X.b;
    return(dout);
}
main()
{
    complex c1;
    cout<<"enter a complex number";
    operator>>(cin,c1); //cin>>c1; OR cin.operator>>(c1);
    cout<<"your complex number is";
    operator<<(cout,c1);  //cout<<c1; OR cout.operator<<(c1);
}
