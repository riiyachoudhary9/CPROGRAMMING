#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found\n");

    printf("Riya choudhary");
    return 0;
}