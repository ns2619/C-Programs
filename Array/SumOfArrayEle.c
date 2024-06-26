#include<stdio.h>
int main()
{
	int i, n, sum;
	sum = 0;
	printf("Enter the number of elements in array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the value of array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	system("cls");
	printf("\nThe value of array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
		sum = sum + arr[i];
	}
	printf("\nSum of array elements = %d",sum);
	return 0;
}
