#include<stdio.h>
int main()
{
	int i,k=0;
	int arr1[5],arr2[5],arr3[10];
	printf("Enter the element of 1st array\n");
	for( i =0;i<5;i++)
		scanf("%d",&arr1[i]);
	printf("Enter the element of 2nd array\n");
	for( i =0;i<5;i++)
		scanf("%d",&arr2[i]);
	
	for( i =0;i<10;i++)
	{
		if(i<5)
		arr3[i] = arr1[i];
		if(i>=5)
		{
		arr3[i] = arr2[k];
		k++;
		}
	}
	printf("Output of Merge Array\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr3[i]);
	return 0;

}
