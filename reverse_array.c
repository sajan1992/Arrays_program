#include<stdio.h>
int main()
{
	int i,j,c;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);

	printf("Enter array is displayed as\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
//reversing array
	for( i=0;i<10;i++)
	{
		c=arr[9];
		for (j =9; j>i;j--)
		arr[j]=arr[j-1];
		arr[i]=c;
	}//reverse complete

	printf("Array in Reverse order is printed as\n");
	for(i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	return 0;

}
