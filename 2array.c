#include<stdio.h>
main()
{
	int a[100];
	int i,n,sum=0;
	printf("find the sum of all element\n");
	printf("enter the  element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("sum of all element:%d",sum);
}
