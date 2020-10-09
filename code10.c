                            /*takes something and return somthing*/

 #include<stdio.h>
 #include<conio.h>
int add(int,int);
void main()
{
    int s,x,y;
    printf("enter any two number\n");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("addition of two number is %d",s);
}

int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
