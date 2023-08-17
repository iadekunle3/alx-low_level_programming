#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
	if (month >= 2 && day >= 60)
	{
		day++;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	return (0);
}

