#include <stdio.h>

int main(void) {
	long n, sum = 0;													// Used long, which means long ints (longer numbers allowed)

	printf("This program sums a series of long numbers\n");
	
	while (n != 0) {

		printf("Type a number (0 to end): ");
		scanf("%ld", &n);                                   // Used %ld to scan and use long integers
		sum += n;
	}
	
	printf("The sum is: %ld\n", sum);

	return 0;
}
