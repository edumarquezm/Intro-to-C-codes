#include <stdio.h>

// Print array values, calculate max, min, and average.

void printArrayValues(int arr[], int size) {

	for (int i = 0; i < size; i++) {

		printf("%d ", arr[i]);
	}

	printf("\n");
}


void findMaxMinArray(int arr[], int size) {

	int max = arr[0];

	int min = arr[0];

	for (int i = 0; i < size; i++) {

		if (arr[i] > max) {											// Calculate max

			max = arr[i];


		}

		if (arr[i] < min) {

			min = arr[i];

		}

	}
	
	printf("Max value in array: %d\n", max);

	printf("Min value in array: %d\n", min);

}

void findAverageArray(int arr[], int size) {

	float avg = 0;
	
	for (int i = 0; i < size; i++) {

		avg += arr[i];

	}

	printf("Average of the array: %.1f\n", avg / size);

}


int main(void) {

	int arr[] = { 17,22,3,4,5,23,25,6,351,11 };
	
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("All array values: ");
	printArrayValues(arr, size);

	findMaxMinArray(arr, size);

	findAverageArray(arr, size);

	return 0;
}
