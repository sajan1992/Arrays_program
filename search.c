#include<stdio.h>
int main()
{
	int i,key;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);

	printf("Enter array is displayed as\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	printf("Enter key to be searched\n");
	scanf("%d",&key);
	for( i=0;i<10;i++)
	{	
		if(key == arr[i])
		printf("The key is found at position -> %d\n",i);
	}
	return 0;

}
