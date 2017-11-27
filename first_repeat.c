#include<stdio.h>
int main()
{
	int i,j,k;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);

	printf("Enter array is displayed as\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i] == arr[j])
			{
				k=arr[i];
				break;
			}

		}
	}
	printf("first repeated element -> %d\n",k);
	return 0;

}
