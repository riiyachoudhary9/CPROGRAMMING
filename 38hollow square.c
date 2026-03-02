#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, j;
    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("Riya choudhary");
    return 0;
}