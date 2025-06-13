#include <stdio.h>

// Sum the elements of an array using pointers

int sum_array(int* a, int n);

int main(void) {

	int arr[] = { 10,20,30,40,50 };

	int arrLength = sizeof(arr) / sizeof(arr[0]);

	int result = sum_array(arr, arrLength);

	printf("Result: %d", result);

	return 0;
}

// Sum all elements inside of an array (with p as the pointer pointing to an array)

int sum_array(int* a, int n) {

	int* p;
	int sum = 0;

	for (p = a; p < a + n; p++) {

		sum += *p;

	}

	return sum;
}
