#include<stdio.h>
 #include<conio.h>
 int add(void);
 void main()
 {
    int s;
    s=add();
    printf("addition of two number is %d",s);
 }


 int add()
 {
     int a,b,c;
     printf("enter any two number for addition\n");
     scanf("%d%d",&a,&b);
     c=a+b;
     return(c);
 }
