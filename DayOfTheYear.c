#include <stdio.h>

// Get the day of the year

int day_of_year(int m, int d, int y) {

	int months_of_year[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int single_day = 0;
	int i;

	for (i = 0; i < m - 1; i++) {					// Calculates the number of days until the selected month

		single_day += months_of_year[i];
	}

	single_day += d;


	// If date is given in a leap year (date after 2/29), we have to check for leap years (divisible by 4) and other clauses

	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {

		if (m > 2) {

			single_day++;
		}
	}

	return single_day;
}

int main(void) {

	int m, d, y;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("The day of the year is: %d", day_of_year(m, d, y));

	return 0;
}

