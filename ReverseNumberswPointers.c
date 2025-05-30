#include <stdio.h>
#include <stdlib.h>

// Reversing a series of numbers - POINTER VERSION

# define N 10

int main(void) {

	int a[N], i;

	printf("Enter %d numbers: ", N);
	
	for (i = 0; i < N; i++) {
	
		scanf("%d", &a[i]);					// READS DATA INTO a[] array
	}


    // Pointer
    
	int *p;

	printf("In reverse order: ");
	
	for (p = a + N - 1; p >= a; p--) {
		
		printf("%d ", *p);
	}

	printf("\n");

	return 0;
}
