//WAPC to do the following:
//Input: day, month, year.
//Check the following:
//  a. Month between 1 and 12.
//  b. Correct days in month (30 vs 31 days).
//  c. February: 28 days normally, 29 days if leap year.
//Output: "Valid date" or "Invalid date".
#include <stdio.h>

int main() {
    int day, month, year, maxDays;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid date ( invalid month)\n");
        return 0;
    }

    // Days in month
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        maxDays = 31;

    else if (month == 4 || month == 6 || month == 9 || month == 11)
        maxDays = 30;
    else
     {
        // February
        if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
            maxDays = 29; // Leap year
        else
            maxDays = 28;
    }

    if (day >= 1 && day <= maxDays)
        printf("Valid date\n");
    else
        printf("Invalid date\n");

    return 0;
}
