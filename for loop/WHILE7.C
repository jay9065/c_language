#include<stdio.h>
#include<conio.h>
void main ()
{
int i,n;
clrscr();
printf("enter the value of :");
scanf("%d",&n);
clrscr();
i=1;
while(i<=n)
{
printf("\n%d",i);
i+=2;
}
getch();
}