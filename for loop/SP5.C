#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sp=10;
clrscr();
for (i=5;i>=1;i--)
{
for (j=1;j<=sp;j++)
		printf("  ");
for (j=1;j<=i;j++)
{
	 printf("* ");
 }
 sp++;
printf("\n");
}
getch();
}

