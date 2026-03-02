#include <stdio.h>

int main() {
    int num, square, temp;

    printf("Riya Choudhary\n");

    printf("Enter number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            printf("Not Automorphic\n");
            printf("Riya Choudhary");
            return 0;
        }
        temp /= 10;
        square /= 10;
    }

    printf("Automorphic\n");
    printf("Riya Choudhary");

    return 0;
}