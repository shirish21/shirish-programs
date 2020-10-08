#include<stdio.h>
#include<conio.h>
  main()
  {
      int i=1,x;
      while(i<=5)
      {
          printf("enter a number\n");
          scanf("%d",&x);
          if(x>=0)
            break;
          i++;
      }
      i==6?printf("ends normally"):printf("break applied");
      getch();
  }
