      /*take nothing and return noyhing*/

#include<stdio.h>
#include<conio.h>
void main()
{
 void add(void);
 add();
}


void add()
{
 int a,b,c;
 printf("enter two number for addation\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("addation is %d",c);
}
