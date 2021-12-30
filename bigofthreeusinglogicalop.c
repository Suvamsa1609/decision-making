#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter three integers");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z)
	{
		printf("%d",x);
	}
	else if(y>z && y>x)
	{
		printf("%d",y);
	}
	else if(z>x && z>y)
	{
		printf("%d",z);
	}
}
