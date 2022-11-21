#include<stdio.h>
main()
{
	int max=0,min=0,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a[i];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Is a maximum number = %d",max);
	printf("\nIs a minimum number = %d",min);
}
