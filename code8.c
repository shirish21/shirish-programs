       /*take something and return nothing*/

#include<stdio.h>
#include<conio.h>
void add(int,int);     /*global declearation*/
void main()
{
    int x,y;
    printf("enter any two number\n");
    scanf("%d%d",&x,&y);
    add(x,y);         /*actual arguement*/
}


void add(int a,int b)  /*formal arguement , call by value*/
{
    int c;
    c=a+b;
    printf("addition of two numbers is %d",c);
}
