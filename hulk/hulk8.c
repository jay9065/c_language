#include <stdio.h>
int main()
{
int c,n,m;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of m:");
scanf("%d",&m);
c=n*m;
printf("c=%d",c);
printf(" befroe if..");
if(c%5==0)
{
    printf("\nc(%d) is divisible by 5 ans is n(%d)",c,c/5);
}
else
{
    printf("\nc(%d) is not divisible by 5",c);
}
if(n%3==0)
{
    printf("\nc(%d) is divisible by 3 ans is n(%d)",c,c/3);
}
else
{
    printf("\nc(%d) is not divisible by 3",c);
}
return 0;
}