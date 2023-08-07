
#include <stdio.h>

struct student
{
	char name[25];
	int rn;
};
struct student_otherDetails
{
	char address[25];
	int hotelNum;
	struct student s;
};

int main()
{

	struct student_otherDetails add;
	for (int i = 0; i < 1; i++)
	{
		printf("Enter name,rollno., hotel number address of student.\n");
		scanf("%s %d %d %s", add.s.name, &add.s.rn, &add.hotelNum, add.address);
	}
	printf("Output:");
	for (int i = 0; i < 1; i++)
	{
		printf("Name:\t%s \nRollNo:\t%d \nHotelNumber:\t%d  \nAddress:\t%s\n", add.s.name, add.s.rn, add.hotelNum, add.address);
	}

	return 0;
}
