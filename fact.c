#include<stdio.h>
void add()
{
  int a=10,b=20;
  printf("the addition is=%d",a+b);
} 
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
  add();
  return 0;
}
