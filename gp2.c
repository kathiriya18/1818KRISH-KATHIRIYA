#include<stdio.h>

sum(int arr[],int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum= %d",sum);
}
main()
{
	int n,i,ans;
	int arr[100];
	printf("enter the element= ");
	scanf("%d",&n);	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum(arr,n);
	
	
	
}
