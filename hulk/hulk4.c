#include <stdio.h>
int main()
{
int n,m;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of m:");
scanf("%d",&m);
printf(" befroe if..");
if(n<m)
{
    printf("\nn(%d) is smallest among the all number",n);
}
else
{
    printf("\nm(%d) is smallest among the all number",m);
}
return 0;
}