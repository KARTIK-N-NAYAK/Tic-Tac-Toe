#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 char a[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},p1name[20],p2name[20],p;
int p1(),p2(),win();
void display(),check(int,int,int);

int main()
{
aa: 
system("cls");
printf("\n\n\tTic-Tac-Toe\n\n\n");
printf(" Rules:\n\n\n");
printf(" Player 1 (X):\n Name:");
scanf("%s",&p1name);
printf("\n Player 2 (O):\n Name:");
scanf("%s",&p2name);
display();
for(int i=1;i<5;i++)
{if(p1()==5)
goto bb;
display();
if(win()==5)
goto bb;
if(p2()==5)
goto bb;
display();
if(win()==5)
goto bb;
}
if(p1()==5)
goto bb;


display();
if(win()==5)
goto bb;
printf(" Draw match...\n Game over...");
getch();
bb: printf("\n\n\n Want to play another game?\n YES or NO?\n");
char z[4];
scanf("%s",&z);
for(int i=0;i<10;i++)
 a[i]=' ';
 p='z';
if(strcmp(strlwr(z),"yes")==0)
goto aa;
return 0;
}


void display()
{
system("cls");
printf("\n\n\tTic-Tac-Toe\n\n\n");
printf(" %s vs %s\n\n",p1name,p2name);
printf("        |       |       \n");
printf("    %c   |   %c   |   %c   \n",a[1],a[2],a[3]);
printf("       1|      2|      3\n");
printf(" _______|_______|_______\n");
printf("        |       |       \n");
printf("    %c   |   %c   |   %c   \n",a[4],a[5],a[6]);
printf("       4|      5|      6\n");
printf(" _______|_______|_______\n");
printf("        |       |       \n");
printf("    %c   |   %c   |   %c   \n",a[7],a[8],a[9]);
printf("       7|      8|      9\n");
printf("        |       |       \n\n");
}


int p1()
{p1f:
int i;
printf(" %s's turn:",p1name);
while(scanf("%d",&i)==0||i==0)
{printf(" Invalid input. Try again...\n");
printf(" %s's turn:",p1name);
int c;
while((c=getchar())!='\n'&&c!=EOF);
}
fflush(stdin);
if(i==10)
{
		printf(" %s is winner\n",p2name);
		return 5;
}
if(a[i]==' ')
a[i]='X';
else
{printf(" Invalid move. Try again...\n");
goto p1f;
}
return 0;
}


int p2()
{p2f:
int i;
printf(" %s's turn:",p2name);
while(scanf("%d",&i)==0||i==0)
{printf(" Invalid input. Try again...\n");
printf(" %s's turn:",p2name);
int c;
while((c=getchar())!='\n'&&c!=EOF);
}
fflush(stdin);
if(i==10)
{
		printf(" %s is winner\n",p2name);
		return 5;
}
if(a[i]==' ')
a[i]='O';
else
{printf(" Invalid move. Try again...\n");
goto p2f;
}
return 0;
}


int win()
{
check(1,2,3);
check(4,5,6);
check(7,8,9);
check(1,4,7);
check(2,5,8);
check(3,6,9);
check(1,5,9);
check(3,5,7);
if(p=='X')
{printf(" %s wins!!\n Game over...",p1name);
return 5;
}
if(p=='O')
{printf(" %s wins!!\n Game over...",p2name);
return 5;
}
return 0;
}


void check(int x, int y,int z)
{if((a[x]==a[y]&&a[y]==a[z])&&a[x]!=' ')
p=a[x];
}
