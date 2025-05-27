#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Write a function named capitalize that capitalizes all letters in its argument

void capitalize(char* str) {

	char* ch = str;

	while (*ch != '\0') {

		if (isalpha(*ch)) {				// isalpha() makes sure that every character is a letter

			*ch = toupper(*ch);			// using toupper() we capitalize the letter
		}

		ch++;							// The pointer keeps advancing through each letter of the word
	}
}

int main(void) {

	char s[100];

	printf("Enter a string: ");
	fgets(s, sizeof(s), stdin);

	capitalize(s);

	printf("%s", s);

	return 0;
}
