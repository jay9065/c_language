#include<stdio.h>
#include<conio.h>
int jay(int x)
{
 int y=0;
 while(x!=0)
    {
       y=y*10+x%10;
       x/=10;
    }
       return y;
    }
 int main()
{
   int x,n;
   printf("enter number :");
   scanf("%d",&x);
   n=jay(x);
   printf("the revers number is %d",n);
   getch();
}