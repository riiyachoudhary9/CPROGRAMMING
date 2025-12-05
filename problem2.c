#include <stdio.h>

int main() {
    char arr[10];
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        arr[i] = '*';
    }

    // print triangle
    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            printf("%c ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}
// This code takes an integer input 'n' and prints a right-angled triangle pattern of asterisks (*) using an array to store the asterisks.
