#include<stdio.h>
#include<time.h>

void main()
{
	int n,i,key;
	clock_t start,end;
	double cpu_time_used;
	printf("Enter the number of element");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to be searched :");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("Element found at %d \n",i+1);
			return;
		}
	}
	printf("Element not found \n");
}
