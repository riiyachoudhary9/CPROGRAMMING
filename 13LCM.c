#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int a, b, greater;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    greater = (a > b) ? a : b;

    while(1) {
        if(greater % a == 0 && greater % b == 0) {
            printf("LCM: %d\n", greater);
            break;
        }
        greater++;
    }

    printf("Riya choudhary");
    return 0;
}