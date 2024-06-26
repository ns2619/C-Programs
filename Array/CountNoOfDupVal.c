/* program to copy the elements of one array into another array*/

#include<stdio.h>

int main(){
	int n,i,j,count,dupVal;
	count = 0;
	printf("Enter the number of elements in array :");
	scanf("%d",&n);
	int arr1[n];
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
	 // counting the duplicat number an array ---- finding how many elements are repeated in an array
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;j++)
		{
			if(arr1[i]==arr1[j])
		    {   
			    count++;
		    	break;
//			    dupVal=arr1[i];
	    	}
		}
		
	}
	printf("\nTotal no of duplicate value in an array = %d", count);
	
	
	return 0;
}

