#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Create a square n x n with random numbers (change N to test it)

#define N 8										

int main(void) {

	int randarray[N][N], i, j;	

	srand(time(NULL));

	for (i = 0; i < N; i++) {

		for (j = 0; j < N; j++) {

			randarray[i][j] = rand() % 100;				// stores random numbers in both row and columns (between 0 and 100)

			printf("%d ", randarray[i][j]);

			if ((j + 1) % N == 0) {						// Prints a newline after N numbers so it looks like a N x N
				printf("\n");
			}
		}
	}

	return 0; 
}
