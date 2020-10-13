        /*swapping of two numbers without using third variable*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
}
