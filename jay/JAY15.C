#include<stdio.h>
#include<conio.h>
void main ()
{
int i,total=0;
clrscr ();
for (i=1;i<=7;i+=2)
{
 printf ("%d\n",i);
 total +=i;
 }
printf ("\n total is =%d",total);
getch();
}