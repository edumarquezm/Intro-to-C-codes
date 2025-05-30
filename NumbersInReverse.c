#include <stdio.h>
#include <stdlib.h>

// Reversing a series of numbers

# define N 10

int main(void) {

	int a[N], i;

	printf("Enter %d numbers: ", N);
	
	for (i = 0; i < N; i++) {
	
		scanf("%d", &a[i]);					// Read data into a[] array
	}
	
	printf("\nIn reverse order:");
	
	for (i = N - 1; i >= 0; i--) {
		
		printf(" %d", a[i]);
	}

	printf("\n");

	return 0;
}
