#include<stdio.h>

int main()
{
	int pos, i, n, arr[n];
	printf("Enter the number of array :");
	scanf("%d",&n);
	printf("\nEnter the value of array :");
	
	for(i = 0; i<n-1; i++)
	{
		printf("\narr[%d] = ");
		scanf("%d",arr[i]);
	}
	printf("\nEnter the position of the element to be deleted");
	scanf("%d",&pos);
	
	if(pos>n+1)
	{
		printf("\nDeletion is not possible");
	}
	else
	{
		for(i = pos-1; i<n-1; i++)
		    arr[i] = arr[i+1];
		for(i = pos-1; i<n-1; i++){
			printf("\narr[%d] = %d",i,arr[i]);
		}
	}
	
	
	
	return  0;
}
