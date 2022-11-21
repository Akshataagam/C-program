//find out min and max element of array
#include<stdio.h>
main()
{
	int max=0,min=0,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[n]>max)
		{
			max=a[n];
		}
		if(a[n]<min)
		{
			min=a[n];
		}
	}
	printf("Is a maximum number = %d",max);
	printf("\nIs a minimum number = %d",min);
}
