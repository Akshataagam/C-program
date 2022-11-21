#include<stdio.h>
main()
{
	int a[3][3],sdiag=0,sndig=0,i,j;
	printf("enter a matrix element=");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			{
				sdiag=sdiag+a[i][j];
			}
			else
			{
				sndig=sndig+a[i][j];
			}
		}
	}
	printf("\n sum of diagonal element=%d",sdiag);
	printf("\n sum of non diagonal element=%d",sndig);
}
