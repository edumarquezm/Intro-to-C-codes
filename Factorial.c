#include <stdio.h>

/****************************************************
*					FACTORIAL						*
*****************************************************/

int main() {														// Factorial of 5 =  5 * 4 * 3 * 2 * 1 = 120
	
	int n, factorial = 1;

	printf("Enter a positive integer: ");

	scanf("%d", &n);

	printf("Factorial of %d:", n);

	while (n > 0) {													// n must be higher than 0
		factorial *= n;												// (factorial * n) * (factorial * n-1) * (factorial * n-1)... until n reaches 1 (not zero).
		n--;
	}

	printf(" %d", factorial);										// print factorial result

	return 0;
}
