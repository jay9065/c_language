#include<stdio.h>
#include<conio.h>
void main ()
{
char i,n,j;
clrscr();
printf("enter the value of :");
scanf("%c",&n);
clrscr();
i=n;

while(i<=90)
{
j=i+32;
printf("\n%c-%c",i,j);
i++;
}
getch();
}
