#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3],i,b[3],sum;
	for(i=0;i<5;i++)
	{
		printf("enter val a[%d]: ",i);
		scanf("%d",&a[i]);
		printf(" enter val b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=a[i]+b[i];
		printf(" \n a[%d] %d  b[%d] %d    sum  %d",i,a[i],i,b[i],sum);
	}
	getch();
}