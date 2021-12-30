#include<stdio.h>
void main()
{
	int sp,cp;
	printf("Enter selling price\n");
	scanf("%d",&sp);
	printf("Enter cost price");
	scanf("%d",&cp);
	if(sp>cp)
	{
		printf("Profit");
	}
	else if(sp<cp)
	{
		printf("Loss");
	}
	else
	{
	    printf("No profit and No loss");
    }
}
