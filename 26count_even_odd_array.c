#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int n, i, num;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &num);

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    printf("Riya choudhary");
    return 0;
}