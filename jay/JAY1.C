#include<stdio.h>
#include<conio.h>
	int main()
	{
	char n,a,m;
	clrscr();
	printf("enter your ch : ");
	scanf("%c",&a);
	if(65<=a && a<=90)
	{
	printf (" ascii value %c",a+32);
	}
	else
	printf ("ascii value %c",a-32);
	getch();
	}

