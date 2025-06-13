#include <stdio.h>

// Calculate a U.S dollar amount with the least amount of dollar bills

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones);


int main(void) {
	
	int dollarAmount = 0;
	int twenty_bills, ten_bills, five_bills, one_bills;

	printf("Enter any amount: ");
	scanf("%d", &dollarAmount);


	pay_amount(dollarAmount, &twenty_bills, &ten_bills, &five_bills, &one_bills);

	printf("20$ bills neeeded: %d\n", twenty_bills);
	printf("10$ bills neeeded: %d\n", ten_bills);
	printf("5$ bills neeeded: %d\n", five_bills);
	printf("1$ bills neeeded: %d\n", one_bills);

	return 0;
}


// Function to calculate how many dollar bills are needed to match the dollar amount.
void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones) {

	*twenties = dollars / 20;
	*tens = (dollars - (*twenties * 20)) / 10;
	*fives = ((dollars - (*twenties * 20) - (*tens * 10)) / 5);
	*ones = (dollars - (*twenties * 20) - (*tens * 10) - (*fives * 5)) / 1;
}
