#include<stdio.h>
//array insert
void main()
{
	int a[100],i,n,number,pos;
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
	printf("enter the number which u want to insert\n");
	scanf("%d",&number);
	printf("enter the position where you want to insert the number\n");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	n=n+1;
	a[pos]=number;
	printf("\n inserting new array we get is\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
