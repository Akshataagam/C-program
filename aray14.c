#include<stdio.h>
//array remove
void main()
{
	int a[100],i,n,pos;
	printf("\n enter the no of element ");
	scanf("%d",&n);
	printf("enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("element of array are\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("enter the position where you want to remove the number\n");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	//a[pos]=number;
	printf("\n remove new array we get is\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
