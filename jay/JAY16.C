#include<stdio.h>
#include<conio.h>
void main ()
{
int i,j=1,n;
clrscr ();
printf ("enter n:");
scanf ("%d",&n);
for (i=0;i<=n;i++)
{
 j=i*i;
 printf ("%d\n",j);
 }
getch();
}