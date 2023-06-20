#include <stdio.h>
int main()
{
int n;
printf("enter the value of n:");
scanf("%d",&n);
printf(" befroe if..");
if(n%5==0)
{
    printf("\nn(%d) is divisible by 5 ans is n(%d)",n,n/5);
}
else
{
    printf("\nn(%d) is not divisible by 5",n);
}
return 0;
}