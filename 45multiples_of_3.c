#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 3 == 0)
            printf("%d ", i);
    }

    printf("\nRiya choudhary");
    return 0;
}