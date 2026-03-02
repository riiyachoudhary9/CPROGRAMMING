#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    printf("Riya choudhary");
    return 0;
}