#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\nRiya choudhary");
    return 0;
}