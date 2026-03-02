#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n-i; j++)
            printf(" ");
        for(k = 1; k <= 2*i-1; k++)
            printf("*");
        printf("\n");
    }

    printf("Riya choudhary");
    return 0;
}