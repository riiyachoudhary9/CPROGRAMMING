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

    int largest = -999999, second = -999999;

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest: %d\n", second);

    printf("Riya choudhary");
    return 0;
}