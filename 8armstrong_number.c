#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int num, original, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0) {
        digit = num % 10;
        sum = sum + digit*digit*digit;
        num = num / 10;
    }

    if(original == sum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    printf("Riya choudhary");
    return 0;
}