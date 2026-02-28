#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);

    printf("Riya choudhary");
    return 0;
}