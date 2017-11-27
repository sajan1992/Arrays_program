#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);

	printf("Enter array is displayed as\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	return 0;

}
