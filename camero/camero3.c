#include <stdio.h>
int main()
{
int a,hra,da,gross_salary;
printf ("enter the salary:");
scanf ("%d",&a);
if (a<5000)
{
hra=(a*8)/100;
da=(a*20)/100;
gross_salary=hra+da+a;
printf ("your gross salary is %d",gross_salary);
}
else if(a>5000 && a<10000)
{
hra=(a*12)/100;
da=(a*30)/100;
gross_salary=hra+da+a;
printf ("your gross salary is %d",gross_salary);
}
else if(a>10000 && a<15000)
{
hra=(a*15)/100;
da=(a*40)/100;
gross_salary=hra+da+a;
printf ("your gross salary is %d",gross_salary);
}
else
{
hra=(a*20)/100;
da=(a*50)/100;
gross_salary=hra+da+a;
printf ("your gross salary is %d",gross_salary);
}
return 0;
}