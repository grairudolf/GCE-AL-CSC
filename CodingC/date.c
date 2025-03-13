#include <stdio.h>

int main() {
    int day, month, year;
    int isLeapYear = 0, isValidDate = 0;

    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        isLeapYear = 1;
    }

    // Check if the month is valid
    if (month >= 1 && month <= 12) {
        // Check if the day is valid
        if ((day >= 1 && day <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
            isValidDate = 1;
        } else if ((day >= 1 && day <= 30) && (month == 4 || month == 6 || month == 9 || month == 11)) {
            isValidDate = 1;
        } else if ((day >= 1 && day <= 28) && (month == 2)) {
            isValidDate = 1;
        } else if (day == 29 && month == 2 && isLeapYear == 1) {
            isValidDate = 1;
        }
    }

    // Print the result
    if (isValidDate) {
        printf("The date %02d/%02d/%04d is valid.\n", day, month, year);
    } else {
        printf("The date %02d/%02d/%04d is not valid.\n", day, month, year);
    }

    return 0;
}
