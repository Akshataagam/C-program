#include<stdio.h>
int main()
{
	int i,j,sum=0,a[3][3];
	printf("enter matrix element");
		for(i=0;i<3;++i)
		{
			for(j=0;j<3;++j)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<3;++i)
		{
			for(j=0;j<3;++j)
			{
				sum=sum+a[i][j];
			}
			printf("sum of rows=%d\n",sum);
			sum=0;
		}	
		sum=0;
		for(j=0;j<3;++j)
		{
			for(i=0;i<3;++i)
			{
				sum=sum+a[i][j];
			}
			printf("sum of colums=%d\n",sum);
			sum=0;
		}
		return 0;
}	
		
