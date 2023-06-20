#include <stdio.h>
int main()
{
int c,d,n,m;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of m:");
scanf("%d",&m);
c=n*m;
printf("c=%d",c);
d=m+n;
printf(" befroe if..");
if(c%d==0)
{
    printf("\nc(%d) is divisible by their addition ans is n(%d)",c,c/d);
}
else
{
    printf("\nc(%d) is not divisible by their addition",c);
}
return 0;
}