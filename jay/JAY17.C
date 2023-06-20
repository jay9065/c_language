#include<stdio.h>
#include<conio.h>
void main ()
{
int i,j=1,n;
clrscr ();
printf ("enter n:");
scanf ("%d",&n);
for (i=1;i<=n;i++)
{
if (i%2==0)
{
 j=i*i;
 printf ("%d\n",j);
 }
 else
 {
 printf("%d\n",i);
 }
 }
getch();
}
