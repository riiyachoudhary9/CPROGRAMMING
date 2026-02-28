#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial: %lld\n", fact);

    printf("Riya choudhary");
    return 0;
}