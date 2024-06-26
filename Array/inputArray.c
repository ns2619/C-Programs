#include<stdio.h>

int main()
{
	int arr[5];
	int i;
	printf("Enter the array values\n");
	for(i=0;i<5;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\narr[%d] = %d",i,arr[i]);
	}
	return 0;
}
