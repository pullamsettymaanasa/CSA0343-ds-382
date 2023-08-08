#include<stdio.h>
long factorial(int n)
{
	if(n==0)
	return 1;
	else
	return(n*factorial(n-1));
}
void main()
{
	int n;
	long fact;
	printf("enter a number:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("factorial is %d",fact);
	return 0;
}

