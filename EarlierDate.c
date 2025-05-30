#include <stdio.h>

// Enter two dates, then, indicate which one is earlier on the calendar.

struct date {

    int month;
    int day;
    int year;

};

int day_of_the_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void) {

    struct date d;
    struct date d2;

    // First date

    printf("Enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &d.month, &d.day, &d.year);

    printf("Day of year: %d\n\n", day_of_the_year(d));

    // Second date 

    printf("Enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

    printf("Day of year: %d\n\n", day_of_the_year(d2));


    // Compare the dates and return the earlier date

    compare_dates(d, d2);


    return 0;
}


// Calculate days of the year

int day_of_the_year(struct date d) {

    int days_in_months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // If it's a leap year, update the days in February
    if (d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0)) {
        days_in_months[1] = 29;
    }

    // Calculate the day of the year
    int calendar_day = 0;

    // Add days from previous months
    for (int i = 0; i < d.month - 1; i++) {
        calendar_day += days_in_months[i];
    }

    // Add the day of the current month
    calendar_day += d.day;

    return calendar_day;
}




// Compare two dates to see which one is earlier

int compare_dates(struct date d1, struct date d2) {

    // Compare years
    if (d1.year > d2.year) {

        printf("Earlier date: %d/%d/%d\n", d2.month, d2.day, d2.year);

    }

    else if (d1.year < d2.year) {

        printf("Earlier date: %d/%d/%d\n", d1.month, d1.day, d1.year);
    }
    
    // Same year -> Compare months
    else {

        if (d1.month > d2.month) {
            printf("Earlier date: %d/%d/%d\n", d2.month, d2.day, d2.year);
        }

        else if (d1.month < d2.month) {

            printf("Earlier date: %d/%d/%d\n", d1.month, d1.day, d1.year);
        }

        // Same year and month -> Compare days

        else {

            if (d1.day > d2.day) {
                printf("Earlier date: %d/%d/%d\n", d2.month, d2.day, d2.year);
            }
            
            else if (d1.day < d2.day) {

                printf("Earlier date: %d/%d/%d\n", d1.month, d1.day, d1.year);
            }

            else {
                
                printf("Same date!\n");
            }

        }
    }

    return 0;
}
