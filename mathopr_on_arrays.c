#include<stdio.h>
int main()
{
	int i,k=0;
	int arr1[5],arr2[5],sum[5],diff[5];
	printf("Enter the element of 1st array\n");
	for( i =0;i<5;i++)
		scanf("%d",&arr1[i]);
	printf("Enter the element of 2nd array\n");
	for( i =0;i<5;i++)
		scanf("%d",&arr2[i]);
	
	for( i =0;i<5;i++)
	{
		sum[i] = arr1[i] + arr2[i];
		diff[i] = arr1[i] - arr2[i];
	}
	printf("Output of sum\n");
	for( i=0;i<5;i++)
		printf("%d > %d\n",i,sum[i]);
	printf("Output of differece\n");
	for( i=0;i<5;i++)
		printf("%d > %d\n",i,diff[i]);
	return 0;
	

}
