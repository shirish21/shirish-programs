              /*even odd program using enumerators*/

#include<stdio.h>
#include<conio.h>
enum boolean 
{
    false,true
};

enum boolean evenodd(int x)
{
    if(x%2==0)
    return(true);
    else
    return(false);
}

int main()
{
    int n;
    enum boolean result;
    printf("enter any nuumber");
    scanf("%d",&n);
    result=evenodd(n);
    if(result==true)
    printf("number is even");
    else
    printf("number is odd");
    getch();
}
