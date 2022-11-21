#include<stdio.h>
int main()
{
	int maths,phy,chem,Total;
	printf("enter the marks of the maths,phy,chem=");
	scanf("%d%d%d",&maths,&phy,&chem);
	if(maths>=65 && phy>=55 &&chem>=50)
	{
		Total=maths+phy+chem;
		if(Total>=180)
		{
			printf("\nu are eligiblity of admission for a professional course");
		}
		
	}
	else
	{
		printf("\nu are NOT eligiblity of admission for a professional course");
	}
	return 0;
}
