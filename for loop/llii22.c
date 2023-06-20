#include<stdio.h>
#include<conio.h>

int perfact(int a){

int i,n=0;

for(i=1;i<a;i++){

if (a%i==0){

n=n+i;

printf("%d ",i);

}

}printf("%d",n);

if(a==n) printf("\nThis Number is Perfact: %d",n); else printf("\nThis Number is Not Perfact: %d",n);

}

int main(){

int a;

printf("Enter A:");

scanf("%d",&a);

perfact(a);

}