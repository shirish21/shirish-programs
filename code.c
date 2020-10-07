#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x<0)
    {
        printf("the number is negative");
    }
    if(x>=0)
    {
        printf("the number is positive");
    }
    getch();
}
