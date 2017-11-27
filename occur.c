#include<stdio.h>
int main()
{
	int i,key,k=0;
	int arr[10];
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);

	printf("Enter array is displayed as\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	printf("Enter the key to know its occurence\n");
	scanf("%d",&key);

	//finding occurence
	for(i=0;i<10;i++)
		if(key == arr[i])
			k++;
	printf("The occurence of %d is -> %d\n",key,k);
	return 0;

}
