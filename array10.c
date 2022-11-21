#include<stdio.h>
main()
{
	int inputarray[100];
	int i,j,elementcount,count=0;
	printf("enter the value");
	scanf("%d",&elementcount);
//	printf("enter the number %d",elementcount);
	for(i=0;i<elementcount;i++)
	{
		scanf("%d",&inputarray[i]);
	 } 
	 for(i=0;i<elementcount;i++)
	 {
	 	for(j=i+1;j<elementcount;j++)
		{
			if(inputarray[i]==inputarray[j])
			{
				count++;
				break;
			}
		}
	 }
	 printf("\n duplicate element count=%d",count);
}
