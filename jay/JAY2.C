#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf ("enter a:");
scanf("%d",&a);
printf ("enter b:");
scanf("%d",&b);
printf ("enter c:");
scanf("%d",&c);
//a>b ? printf ("a is largest number"):

//b>c ? printf ("b is largest number"):printf ("`c is largest number");

printf("largest:%d",(a>b&&a>c) ? a : (b>c) ? b : c);
getch();
}

// nested if else
// ladder if else