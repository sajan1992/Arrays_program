#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int i,pts,key;
	int arr[10];
	//input from the user
	printf("Enter the element of array\n");
	for( i =0;i<10;i++)
		scanf("%d",&arr[i]);
	//displaying the entered input
	printf("Entered array is displayed as\n");
	for( i=0;i<10;i++)
		printf("%d > %d\n",i,arr[i]);
	//taking the key to be removed
	printf("Enter key to be deleted\n");
	scanf("%d",&key);
	//removing the key from the array
	for(i=0;i<10;i++)
	{
		if(key == arr[i])
			pts=i;		
	}
	for(i=pts;i<9;i++)
	{
		arr[i] = arr[i+1]; 
	}
	printf("Array element after deleting\n");
	for( i=0;i<9;i++)
		printf("%d > %d\n",i,arr[i]);
	return 0;

}
