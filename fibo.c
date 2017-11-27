#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,limit,i;
	printf("Enter the limit upto which finonacci you want\n");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
	a=b;
	b=c;
	c=a+b;
	printf("%d ->",c);
	}
	printf("\n");
	return 0;
}
