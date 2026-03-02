#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sum += i;
    }

    printf("Sum of even numbers: %d\n", sum);

    printf("Riya choudhary");
    return 0;
}