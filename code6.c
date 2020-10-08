#include<stdio.h>
#include<conio.h>
main()
{
int choice,i,a,b;
printf("1) Addition of two numbers");
printf("\n2) identify even and odd number");
printf("\n3) identify the first n natural numbers\n");
printf("  enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    i=a+b;
    printf("addition is %d",i);break;
case 2:
    printf("enter a number");
    scanf("%d",&a);
    if(a%2==0)
    printf("number is even");
    else
    printf("number is odd");break;
case 3:
    printf("enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d\n",i);
    } break;
default:
    printf("invalid choice");

}
}
