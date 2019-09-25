// Author: Finbar Berkon
// Date: September 2019
// A program to check if a given year is a leap year!

#include <stdio.h>

int main(void) {

    int year;
    printf("Please enter a number: ");

    scanf("%d", &year);
    // (year is divisible by 4)
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("It is a leap year\n");
            } else {
                printf("It is not a leap year\n");
            }
        } else {
            printf("It is a leap year\n");
        }
    } else {
        printf("It is not a leap year\n");
    }

    return 0;
}