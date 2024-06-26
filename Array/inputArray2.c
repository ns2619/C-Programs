#include<stdio.h>

int main()
{
	int n, i;
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the array values\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nArray Elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}

	return 0;
}
