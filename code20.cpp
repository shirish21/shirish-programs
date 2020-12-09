/*program to enter book details from user in c++*/

#include<bits/stdc++.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
book input();
void display(book);
main()
{
    book b1;
    b1=input();
    display(b1);
}

book input()
{
    book b;
    cout<<"enter bookid , title and price\n";
    fflush(0);
    cin>>b.bookid>>b.title>>b.price;
    return(b);
}
void display(book b)
{
    cout<<"\nbookid is "<<b.bookid<<"\n"<<"title is "<<b.title<<"\n"<<"price is "<<b.price;
}
