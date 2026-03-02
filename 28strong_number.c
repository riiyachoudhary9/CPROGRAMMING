#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int num, original, digit, i;
    int sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0) {
        digit = num % 10;
        fact = 1;

        for(i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num = num / 10;
    }

    if(sum == original)
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");

    printf("Riya choudhary");
    return 0;
}