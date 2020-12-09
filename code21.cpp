/*program to enter book details from user using encapsulation*/ 

#include<bits/stdc++.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
    void input()
    {
        cout<<"enter bookid , title , price\n";
        cin>>bookid>>title>>price;
    }
    void display()
    {
        cout<<"bookid is "<<bookid<<"\n"<<"title is "<<title<<"\n"<<"price is "<<price;
    }
};

main()
{
    book b1;
    b1.input();
    b1.display();
}
