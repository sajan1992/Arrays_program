#include<stdio.h>
int main()
{
	int i,j,c;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);

	printf("Unsorted array is displayed as\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i] > arr[j])
			{
				c=arr[j];
				arr[j]=arr[i];
				arr[i]=c;
			}
		}
	}
	printf("Sorted Array is displayed as\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	return 0;

}
