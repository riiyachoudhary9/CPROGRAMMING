#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap a=%d b=%d", a, b);
    return 0;
}
//WAP to swap two numbers using third variable
