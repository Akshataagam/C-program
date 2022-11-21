#include<stdio.h>
int main()
{
  int fact=1,i,num;
  printf("enter the number=");
  scanf("%d",&num);
  for(i=1;i<num;i++)
  {
    fact=fact*num;
  }
  printf("the factorial=%d",fact);
  return 0;
}
