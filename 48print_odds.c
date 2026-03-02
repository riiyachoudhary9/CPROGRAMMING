#include <stdio.h>

int main() {
    int start, end, i;

    printf("Riya Choudhary\n");

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }

    printf("\nRiya Choudhary");

    return 0;
}