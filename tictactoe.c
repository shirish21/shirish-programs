#include<stdio.h>
#include<conio.h>
char A[9]={"123456789"};
void check(char,char);
void gameName()
{
     printf("\t\t\t\t\t\t\tTicTacToe Game");
}
void inputSymbol()
{
    printf("\nplayer 1 symbol:x:\n");
    printf("player 2 symbol:0:");
}
void start()
{
    int a;
    printf("\n\nenter who will start the game:player 1 or player 2 :");
    scanf("%d",&a);
}
int count=0;
void play()
{
    char p,s;
    printf("\n\nenter position and symbol of the player:");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    check(p,s);
    count++;
}
int end()
{
    if((A[0]=='x'&&A[1]=='x'&&A[2]=='x')||(A[0]=='x'&&A[3]=='x'&&A[6]=='x')||(A[0]=='x'&&A[4]=='x'&&A[8]=='x'))
        return 100;
    else if((A[0]=='0'&&A[1]=='0'&&A[2]=='0')||(A[0]=='0'&&A[3]=='0'&&A[6]=='0')||(A[0]=='0'&&A[4]=='0'&&A[8]=='0'))
        return 200;
    else if(A[1]=='x'&&A[4]=='x'&&A[7]=='x')
         return 100;
    else if(A[1]=='0'&&A[4]=='0'&&A[7]=='0')
         return 200;
    else if((A[2]=='x'&&A[5]=='x'&&A[8]=='x')||(A[2]=='x'&&A[4]=='x'&&A[6]=='x'))
        return 100;
    else if((A[2]=='0'&&A[5]=='0'&&A[8]=='0')||(A[2]=='0'&&A[4]=='0'&&A[6]=='0'))
        return 200;
    else if(A[3]=='x'&&A[4]=='x'&&A[5]=='x')
        return 100;
    else if(A[3]=='0'&&A[4]=='0'&&A[5]=='0')
        return 200;
    else if(A[6]=='x'&&A[7]=='x'&&A[8]=='x')
        return 100;
    else if(A[6]=='0'&&A[7]=='0'&&A[8]=='0')
        return 200;
        return 300;
}
void check(char P,char S)
{
    int i;
    for(i=0;i<=8;i++)
    {
       if(A[i]==P)
       {
           A[i]=S;
       }
    }
}

void show()
{
    printf("\n\n\t\t\t---|---|---");
    printf("\n\t\t\t%c  | %c | %c",A[0],A[1],A[2]);
    printf("\n\t\t\t---|---|---");
    printf("\n\t\t\t%c  | %c | %c",A[3],A[4],A[5]);
    printf("\n\t\t\t---|---|---");
    printf("\n\t\t\t%c  | %c | %c",A[6],A[7],A[8]);
    printf("\n\t\t\t---|---|---");
}
void main()
{   int z;
    char ch;
    labell:
    clrscr();
    gameName();
    show();
    inputSymbol();
    start();
    play();
    label:
    clrscr();
    show();
    play();
    z=end();
    clrscr();
    show();
    if(count<9)
    {
    if(z==100)
    {
     printf("\nPlayer 1 won");
     count=0;
    }
    else if(z==200)
        {
            printf("\nplayer 2 won");
            count=0;
        }
    else
        goto label;
    }
    else
       {
        printf("\nGame Draw");
        count=0;
       }
    printf("\nDo you want to play again : Enter Y for yes and N for no-");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='Y'||ch=='y')
    {  A[0]='1';
       A[1]='2';
       A[2]='3';
       A[3]='4';
       A[4]='5';
       A[5]='6';
       A[6]='7';
       A[7]='8';
       A[8]='9';
        goto labell;
    }
    getch();
}
