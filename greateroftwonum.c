#include<stdio.h>
void main()
{
  int x,y;
  printf("enter two integers");
  scanf("%d%d",&x,&y);
  if(x>y)
  {
  	printf("%d",x);
  }
  else if(x<y)
  {
  	printf("%d",y);
  }
  else
  {
  	printf("both are equal");
  }
}
