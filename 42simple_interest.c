#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    float p, r, t, si;

    printf("Enter principal: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest: %.2f\n", si);

    printf("Riya choudhary");
    return 0;
}