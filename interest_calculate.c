#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci;
    printf("Enter P R T: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p*r*t)/100;
    ci = p * pow((1+r/100), t) - p;

    printf("Simple Interest = %.2f\nCompound Interest = %.2f", si, ci);
    return 0;
}
//WAP for Simple Interest and Compound Interest
