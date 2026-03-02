#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d\n", a, b);

    printf("Riya choudhary");
    return 0;
}