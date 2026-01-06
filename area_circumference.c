#include <stdio.h>

int main() {
    float r, area, cir;
    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    cir = 2 * 3.14 * r;

    printf("Area = %.2f\nCircumference = %.2f", area, cir);
    return 0;
}
//WAP to find area and circumference of circle
