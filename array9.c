#include<stdio.h>
main()
{
	int a[5],cnt1=0,cnt2=0,cnt3=0,i;
	printf("\n enter array element");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<=4;i++)
	{
		if(a[i]==0)
		cnt1++;
		if(a[i]>0)
		cnt2++;
		if(a[i]<0)
		cnt3++;
	}
	printf("\n no of zero=%d",cnt1);			
	printf("\n no of zero=%d",cnt2);		
	printf("\n no of zero=%d",cnt3);		
	}	
	
