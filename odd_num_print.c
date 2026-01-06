#include <stdio.h>

int main() {
    int i = 1, n;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are:\n", n);

    while (i <= n) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
