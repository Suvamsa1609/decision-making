#include<stdio.h>
void main()
{
	int n;
	printf("Enter week day");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Monday");
	}
	else if(n==2)
	{
	   printf("Tuesday");
	}
	else if(n==3)
	{
		printf("wednesday");
	}
	 else if(n==4)
	{
		printf("Thursday");
	}
    else if(n==5)
	{
		printf("Friday");
	}
    else if(n==6)
	{
		printf("Saturday");
	}
	else if(n==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Invalid input");
	}
}
