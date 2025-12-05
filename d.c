#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in C: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;
    printf("Fahrenheit = %.2f", f);
    return 0;
}
//WAP to convert temperature from Celsius to Fahrenheit