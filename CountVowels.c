#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Write a program that counts the number of vowels (a,e,i,o,u) in a sentence.

int compute_vowel_count(const char* sentence) {

	int amount_of_vowels = 0;

	const char* p = sentence;

	while (*p != '\0') {	// Read through all characters and convert all vowels to uppercase to make the count easier

		if (toupper(*p) == 'A' || toupper(*p) == 'E' || toupper(*p) == 'I' || toupper(*p) == 'O' || toupper(*p) == 'U') {
		    
			amount_of_vowels++;         // When a vowel is found, increase the counter
		}

		p++;					// Move the pointer through the sentence
	}

	printf("Your sentence contains %d vowels.", amount_of_vowels);

}


int main(void) {

	char examplesentence[100];

	printf("Enter a sentence: ");
	fgets(examplesentence, sizeof(examplesentence), stdin);


	// Count vowels
	compute_vowel_count(examplesentence);

	return 0;
}

