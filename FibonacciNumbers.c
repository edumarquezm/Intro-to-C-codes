#include <stdio.h>
#include <stdlib.h>

// Fibonacci numbers are those numbers such as: 0 + 1 = 2   and  2 + 3 = 5  and  3 + 5 = 8  and  5 + 8 = 13... and so on

#define N 40

int mainee(void) {

	int fib_numbers[N] = { 0,1 };					// First two numbers of the Fibonacci sequence

	for (int i = 2; i < N; i++) {

		fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];					// LOGIC FOR FIBONACCI NUMBERS
	}

	printf("The first %d Fibonacci numbers are:\n", N);

	for (int i = 0; i < N; i++) {

		printf("%d ", fib_numbers[i]);									// PRINTING FIBONACCI NUMBERS
	}

	printf("\n");

	return 0;

}
