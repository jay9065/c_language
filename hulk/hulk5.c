#include <stdio.h>
int main()
{
int n;
printf("enter the value of n:");
scanf("%d",&n);
printf(" befroe if..");
if(n>0)
{
    printf("\nn(%d) is positive",n);
}
else
{
    printf("\nn(%d) is negative",n);
}
return 0;
}