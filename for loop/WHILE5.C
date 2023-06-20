#include<stdio.h>
#include<conio.h>
void main ()
{
int i,n;
clrscr();
printf("enter the value of :");
scanf("%d",&n);
clrscr();
i=-n;
while(i<=n)
{
printf("\n%d",i);
i++;
}
getch();
}