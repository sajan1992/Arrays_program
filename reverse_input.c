#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =9;i>=0;i--)
		scanf("%d",&arr[i]);

	printf("Entered array in reverse order input\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	return 0;

}
