#include<stdio.h>
main()
{
	int key,found=0,i,a[5];
	printf("enter the array element");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter element to search=");
	scanf("%d",&key);
	for(i=0;i<=4;i++)
	{
		if(a[i]==key)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("\n element is found");
	}
	else
	{
		printf("\n element is not found");
	}
}
