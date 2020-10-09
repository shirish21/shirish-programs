               /*average of ten numbers*/

void main()
{
    int a[10],sum=0,i;
    float avg;
    printf("enter any ten numbers\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    sum=sum+a[i];
    avg=sum/10.0;
    printf("your average is %f",avg);
}
