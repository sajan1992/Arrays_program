#include<stdio.h>
int main()
{
	int i,gr,sm;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);
	gr=sm=arr[0];
	printf("Enter array is displayed as\n");
	for( i=0;i<10;i++)
	{
		if(gr < arr[i])
			gr=arr[i];
		if(sm > arr[i])
			sm=arr[i];
		printf("%d > %d\n",i,arr[i]);
	
	}
	printf("Largest number -> %d\nSmallest number -> %d\n",gr,sm);
		return 0;

}
