              /*create functions using pointer*/
#include<stdio.h>
#include<conio.h>
void input(int*);
void display(int*);
void sort(int*);
void main()
{
int a[5];
input(a);
printf("result of display function is");
display(a);
sort(a);
printf("\n");
display(a);
}

void input(int *p)
{
int i;
for(i=0;i<=4;i++)
    scanf("%d",p+i);      /*  &a{i}=p+i */
}

void display(int *p)
{
int i;
for(i=0;i<=4;i++)
    printf(" %d",*(p+i));   /*  a[i]=*(p+i) */
}

void sort(int *p)
{
int round,i,temp;
for(round=1;round<=4;round++)
{
    for(i=0;i<=4-round;i++)
        if(*(p+i)>*(p+i+1))
    {
        temp=*(p+i);
        *(p+i)=*(p+i+1);
        *(p+i+1)=temp;
    }

}

}
