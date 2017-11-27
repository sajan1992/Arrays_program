#include<stdio.h>
int main()
{
	int i,sum=0,pro=1;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);

	printf("Enter array is displayed as\n");
	for( i=0;i<10;i++)
	{
		sum=sum+arr[i];
		pro=pro*arr[i];
		printf("%d -> %d\n",i,arr[i]);
	}

		printf("Sum of all element -> %d\nProduct of all element -> %d\n",sum,pro);
	return 0;

}
