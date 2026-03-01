#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    printf("Riya choudhary");
    return 0;
}