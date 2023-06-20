#include<stdio.h>
int main()
{
int a,n,bill ;
printf("Enter the UNIT:");
scanf("%d",&a);

	if(a<=100)
	{	
		n = (a*0.60)+50;
		printf("Your BILL is %d rs per unit",n);
	}
	else if(a>100 && a<=300)
	{
		n = 50+ 60+(a-100)*0.80;
		printf("Your BILL is %d rs per unit",n);
	}
else
{
n = 50+ 60+160+(a-300)*0.90;
printf("Your BILL is %d rs per unit",n);
}
if (n>300)
{
n=n+(n*0.15);
printf("Your BILL is %d rs per unit",n);
}
	return 0;
}