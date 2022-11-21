#include<stdio.h>
main()
{
	int marks[5],sum=0,i,avg=0;
	printf("enter the marks of five subject");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("\nsum=%d",sum);
	printf("\navg=%d",avg);
}
