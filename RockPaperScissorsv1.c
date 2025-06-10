#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/********************************************************
*				ROCK PAPER SCISSORS						*
*********************************************************/

int main(void) {

    int p1_number, COM_number;

    // Results

	while (1) {					// Infinite loop

		printf("\tWelcome to rock-paper-scissors!\n");
		printf("      Rock: 0    Paper: 1    Scissors: 2\n");

		// Player 1
		printf("\nChoose your action: ");
		scanf("%d", &p1_number);

		if (p1_number < 0 || p1_number > 2) {			// Check for invalid action (not 1,2 or 3)

			printf("Not a valid action, try again!\n");
			continue;
		}

		// COM Player
		srand(time(NULL));                                                                  // Generate random number
		COM_number = rand() % 3;                                                            // %3 means random number between 0 and 3 (not including 3)
		printf("Now, the computer chooses an action: %d\n", COM_number);

		if (((p1_number == 0) && (COM_number == 1)) || ((p1_number == 1) && (COM_number == 2)) || ((p1_number == 2) && (COM_number == 0)))
			printf("Computer wins!\n");

		else if (((p1_number == 0) && (COM_number == 2)) || ((p1_number == 1) && (COM_number == 0)) || ((p1_number == 2) && (COM_number == 1)))
			printf("You win!\n");

		else
			printf("Tie!\n");


		char p[2];
		printf("Another round? y = yes | n = no: ");
		scanf("%s", p);


		if (strcmp(p, "y") != 0) {					// If player selects anything other than yes, the game ends

			break;
		}

	}


	printf("\nThank you for playing!\n");
    
    return 0;
}
