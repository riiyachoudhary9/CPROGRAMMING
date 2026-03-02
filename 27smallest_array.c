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

    int smallest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Smallest element: %d\n", smallest);

    printf("Riya choudhary");
    return 0;
}