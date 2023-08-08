#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of elements in an array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the %d elements of array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the even numbers are:\n");
	for( i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		printf("%d",arr[i]);
	}
	}
	printf("the odd numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		{
		printf("%d",arr[i]);
	}
}
return 0;
}
