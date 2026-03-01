#include <stdio.h>

int main() {
    printf("Riya choudhary\n");

    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");

    printf("Riya choudhary");
    return 0;
}