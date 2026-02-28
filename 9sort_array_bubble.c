#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nRiya choudhary");
    return 0;
}