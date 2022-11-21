//display book information using structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book{
   char name[50];
   int id;
   char authorname;
   float price;
   char temp;
};
struct book b[20],temp1;
void main() {
   int i,j;
   for(i=0;i<10;i++){
      printf("Enter data of book %d\n",i+1);
      printf("Name: ");
      gets(b[i].name);
      printf("\nid: ");
      scanf("%d",&b[i].id);
      printf("\nprice: ");
      scanf("%f",&b[i].price);
      printf("\n\nauthorname: ");
      scanf("%s",&b[i].authorname);
      scanf("%c",&b[i].temp);
   }
  
printf("List of books:\n");
   for(i=0;i<10;i++){
      printf("%d\t%s\t%d\t%f\t%s\n\n\n",i+1,b[i].name,b[i].id,b[i].price,b[i].authorname);
   }
   getch();
}
