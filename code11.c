                    /*addition of first n natural numbers*/

  #include<stdio.h>
  #include<conio.h>
  int fun(int);
  void main()
  {
      int k,n;
      printf("enter a number\n");
      scanf("%d",&n);
      k=fun(n);
      printf("addition of first natural number is %d",k);
  }


  int fun(int a)
  {
      int s;
      if(a==1)
          return(a);
      s=a+fun(a-1);
          return(s);
  }
