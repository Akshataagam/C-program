#include<stdio.h>
main()
{
	int a[5],i;
	printf("enter the array element");
	for(i=0;i<=4;i++)
	
	{
		scanf("%d",&a[i]);
	}
	
		printf("\n dispaly array element");
		for(i=0;i<=4;i++)
	
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}
