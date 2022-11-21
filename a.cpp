#include<stdio.h>
main()
{
	int i,arr[100],size,odd_count=0;even_count=0,i;
	printf("enter array size :");
	scanf("%d",&size);
	printf("enter array element \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i])
		
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]&1==1)
		odd_count++;
		else
		even_count++;
	
	}
	printf("odd number count= %d \n even number count=%d \n",odd_count,even_count);
	return 0;
}
