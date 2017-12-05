#include<stdio.h>
int main()
{
	int i,j,s,t;
	int arr[5];
	printf("Enter value for Array\n");
	for(i = 0; i<5; i++)
		scanf("%d",&arr[i]);

	printf("Unsorted Array \n");
	for(i =0; i<5; i++)
		printf("%d -> %d\n",i,arr[i]);

	for(j =0; j<5; j++)
	{
		s=j;
		for(i =j+1;i<5;i++)
		{
			if(arr[i]<arr[s])
				s=i;
		}
		t=arr[s];
		arr[s]=arr[j];
		arr[j]=t;
	}
	printf("Sorted Array \n");
	for(i = 0;i<5;i++)
		printf("%d -> %d\n",i,arr[i]);
}
