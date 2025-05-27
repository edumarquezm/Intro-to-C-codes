#include <stdio.h>

/*******************************************************
*				ONE MONTH CALENDAR					   *
********************************************************/

int main(void) {

	int i, n, start;

	printf("Enter number of days in month: ");
	scanf("%d", &n);

	printf("\nEnter starting day of the week (1 = Sun) (7 = Sat): ");
	scanf("%d", &start);
	
	if (start > 7) {            // End program if the start date of the month is out of bounds
	    return 0;
	}
	
    
    printf(" Su Mo Tu We Th Fr Sa\n");

	for (i = 1; i < start; i++) {								// Prints "blank dates" if the calendar doesnt start on 1
		printf("   ");											// if start is 3, the calendar starts on wednesday
	}

	for (i = 1; i <= n; i++) {										// counts from i to n (calendar)

		printf("%3d", i);											// Used %3d meaning 3 spaces between each number

		if ((i + start - 1) % 7 == 0) {								// When a week is completed, we print a newline
			printf("\n");
		}
	}

	return 0;
}
