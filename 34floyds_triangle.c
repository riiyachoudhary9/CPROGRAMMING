#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, j, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    printf("Riya choudhary");
    return 0;
}