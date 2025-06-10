#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>		// to use toupper() function

// Example
// Enter message: Hey dude, C is really cool
// In B1FF speak: H3Y DUD3, C 15 R34LLY C00L!!!!!!!!!!!!!!
																	// A = 4  E = 3  I = 1  O = 0  S = 5

int main(void) {

	int i;
	char message[50];
	printf("Enter message to translate to B1FF language: ");

	fgets(message, sizeof(message), stdin);

	printf("Translation: ");

	for (i = 0; message[i] != '\0'; i++) {							
		switch (message[i]) {
			case 'a': printf("4"); break;
			case 'e': printf("3"); break;
			case 'i': printf("1"); break;
			case 'o': printf("0"); break;
			case 's': printf("5"); break;
		default:
			printf("%c", toupper(message[i]));						// used toupper() function to turn all leters to caps
		}
	}

	return 0;
}
