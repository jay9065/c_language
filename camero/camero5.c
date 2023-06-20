#include<stdio.h>
int main()
{
	float Maths,English,Chemistry,Physics,Total,Present;
	printf(" Enter the marks of Maths:");
	scanf("%f",&Maths);
	printf(" \n Enter the marks of Physics:");
	scanf("%f",&English);
	printf(" \n Enter the marks of Chemistry:");
	scanf("%f",&Chemistry);
	printf(" \n Enter the marks of English:");
	scanf("%f",&Physics);
	Total=Maths+English+Chemistry+Physics;
	printf("\nTotal Marks=%.2f",Total);
	Present=Total/4;
	printf("\nTotal Present=%.2f ",Present);
	if(Maths>=40 && English>=40 && Physics>=40 && Chemistry>=40)	
	{
		printf("\n Pass");
	}
	else 
	{
	printf("\n Fail");
	}
	 if(Present>75)
	{
		printf("\n Garde A");
	}
	else if(Present>60)
	{
		printf("\n Grade B");
	}
	else if(Present>45)
	{
		printf("\n Grade C");
	}
	else if(Present>35)
	{
		printf("\n Grade D");
	}
	else
	{
		printf("\n Fail");
	}
	return 0;
}