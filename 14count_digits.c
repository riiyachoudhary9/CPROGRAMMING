#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        num = num / 10;
        count++;
    }

    printf("Total digits: %d\n", count);

    printf("Riya choudhary");
    return 0;
}