#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	float fee;
};
 
 int main()
 {
	struct employee e[10];
 	int i;
 	for (i=0;i<3;i++)
 	{
 		printf("Enter the id,name and fee of employee.\n");
 	scanf("%d %s %f",&e[i].id,e[i].name,&e[i].fee);	
	 }
     printf("ID\t Name\t Salary\n");
	 for (i=0;i<3;i++)
	 {
	 	printf("%d %s %f \n",e[i].id,e[i].name,e[i].fee);
	 }
 return 0;
 }
