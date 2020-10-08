#include<stdio.h>
#include<conio.h>
main()
{
 int marks;
 printf("enter the marks out of 100\n");
 scanf("%d",&marks);
 if(marks>90)
    printf("grade A");
 else if(marks>80)
    printf("grade B");
 else if(marks>70)
    printf("grade C");
 else printf("grade D");
}
