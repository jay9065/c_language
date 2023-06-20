#include <stdio.h>
int main()
{
int n,m,a;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of m:");
scanf("%d",&m);
printf("enter the value of a:");
scanf("%d",&a);
if(n>m)
{
if(n>a)
    printf("\nn(%d) is largest among the all number",n);
else
    printf("\na(%d) is largest among the all number",a);

}
else
{
   if(m>a)
   {
       printf("\nm(%d) is largest among the all number",m);
   }
else
   {
       printf("\na(%d) is largest among the all number",a);   
   }
}
return 0;
}