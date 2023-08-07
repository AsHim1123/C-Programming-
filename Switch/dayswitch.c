#include <stdio.h>
int main()
{
	int month;

	printf("Enter the month number (1-12): ");
	scanf("%d", &month);

	// Check if the month number is valid
	if (month >= 1 && month <= 12)
	{
		int days;

		// Determine the number of days based on the month number
		switch (month)
		{
		case 2:
			days = 28; // Assuming a non-leap year
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
		}

		printf("Number of days in month %d: %d\n", month, days);
	}
	else
	{
		printf("Invalid month number. Please enter a number between 1 and 12.\n");
	}
	return 0;
}
