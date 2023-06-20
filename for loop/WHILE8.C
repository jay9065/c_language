#include<stdio.h>
#include<conio.h>
void main ()
{
char i,n;
clrscr();
printf("enter the value of :");
scanf("%c",&n);
clrscr();
i=n;
while(i<=90)
{
printf("\t%c",i);
i++;
}
getch();
}