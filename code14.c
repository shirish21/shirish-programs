                      /*swapping of two numbers using function*/

#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int a,b;
printf("enter any two numbers");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("a=%d,b=%d",a,b);
}


void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
