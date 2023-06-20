#include <stdio.h>
int main()
{
int n,m;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of m:");
scanf("%d",&m);
printf(" befroe if..");
if(n>m)
{
    printf("\nn(%d) is greater than m(%d)",n,m);
}
else
{
     printf("\nm(%d) is greater than n(%d)",m,n);
}
printf("\nafter if..");
return 0;
}