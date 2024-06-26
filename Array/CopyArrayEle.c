/* program to copy the elements of one array into another array*/

#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number of elements in array :");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	printf("Enter the value of array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("arr1[%d] = ",i);
		scanf("%d",&arr1[i]);
	}
	system("cls");
	printf("\nThe value of array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("arr1[%d] = %d\n",i,arr1[i]);
	}
	// copy the ele of array to another one 
	printf("\n\nAfter copying the ele of one array to another array\n");
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
		printf("arr2[%d] = %d\n",i,arr2[i]);
	}
	
	return 0;
}

