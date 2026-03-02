#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    if(a >= b && a >= c)
        printf("Largest: %d\n", a);
    else if(b >= a && b >= c)
        printf("Largest: %d\n", b);
    else
        printf("Largest: %d\n", c);

    printf("Riya choudhary");
    return 0;
}