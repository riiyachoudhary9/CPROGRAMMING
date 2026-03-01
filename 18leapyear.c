#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");

    printf("Riya choudhary");
    return 0;
}