              /*program to find the area of circle and rectangle in c++*/

#include<bits/stdc++.h>
using namespace std;
float area(int x);
int area(int y,int z);
main()
{
    int a;
    cout<<"enter the radius of circle";
    cin>>a;
    int s=area(a);
    cout<<"radius OF circle is "<<s;
    int l,b;
    cout<<"\nenter length and breadth of rectangle";
    cin>>l>>b;
    int m=area(l,b);
    cout<<"area of rectangle is "<<m;
}

float area(int A)
{
    return(3.14*A*A);
}

int area(int B,int C)
{
    return(B*C);
}
