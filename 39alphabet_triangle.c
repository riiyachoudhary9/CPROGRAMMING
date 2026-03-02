#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 0; j < i; j++) {
            printf("%c", 65 + j);
        }
        printf("\n");
    }

    printf("Riya choudhary");
    return 0;
}