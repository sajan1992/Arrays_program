#include<stdio.h>
int main()
{
	int i,pi,pe,j,k,s;
	int arr[5];
	printf("Enter Element of Array\n");
	for(i = 0; i<5; i++)
		scanf("%d",&arr[i]);

	printf("Enter Unsorted Array \n");
	for(i = 0; i<5; i++)
		printf("%d -> %d \n",i,arr[i]);

	for(j =0; j<4; j++)
	{
		pi = j+1;
		pe = arr[pi];
		for(i = 0; i<=j; i++)
		{
			if(pe < arr[i])
			{
				s = i;
				for(k = j; k>=i; k--)
					arr[k+1] = arr[k];
				
				arr[s] = pe;
				break;
			}
		}
		
	}

	printf("Sorted Array \n");
	for(i = 0; i<5; i++)
		printf("%d -> %d\n",i,arr[i]);
}
				
