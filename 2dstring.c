//[5]=number of student [10]=length of word
#include<stdio.h>
main()
{
	//2d charcter array
	char name[5][10]={"john","smit","scoot","tiger","martin"};
	printf("\n%s",name[0]);
	printf("\n%s",name[1]);
	printf("\n%s",name[4]);
	
	printf("\n%c",name[0][2]);
	printf("\n%c",name[3][2]);
}


